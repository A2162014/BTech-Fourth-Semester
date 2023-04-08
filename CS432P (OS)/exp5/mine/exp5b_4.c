// A C program to implement the preemptive priority CPU scheduling algorithm and compute average waiting time and average turnaround time.
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;

    printf("\n*Preemptive Priority CPU Scheduling Algorithm*\n");

    printf("\nEnter Number of Processes: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("\nInvalid Input Error: Number of processes must be a positive integer.\n\n");
        return 1;
    }

    printf("\n");

    int burst[n], priority[n], index[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Burst Time and Priority Value for process %d: ", i + 1);
        if (scanf("%d %d", &burst[i], &priority[i]) != 2 || burst[i] < 0 || priority[i] < 0)
        {
            printf("\nInvalid Input Error: Burst time and Priority time must be non-negative integers.\n\n");
            return 1;
        }
        index[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = priority[i], m = i;

        for (int j = i; j < n; j++)
        {
            if (priority[j] > temp)
            {
                temp = priority[j];
                m = j;
            }
        }

        swap(&priority[i], &priority[m]);
        swap(&burst[i], &burst[m]);
        swap(&index[i], &index[m]);
    }

    int t = 0;

    printf("\n*Results*\n");

    printf("\nOrder of process Execution:\n");
    for (int i = 0; i < n; i++)
    {
        printf("process %d is executed from %d to %d\n", index[i], t, t + burst[i]);
        t += burst[i];
    }
    printf("\nprocess \tBurst Time\tWait Time\n");
    int wait_time = 0;
    int total_wait_time = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d \t\t%d \t\t%d\n", index[i], burst[i], wait_time);
        total_wait_time += wait_time;
        wait_time += burst[i];
    }

    float avg_wait_time = (float)total_wait_time / n;
    printf("\nAverage Waiting Time: %.2f\n", avg_wait_time);

    int total_Turn_Around = 0;
    for (int i = 0; i < n; i++)
        total_Turn_Around += burst[i];
    float avg_Turn_Around = (float)total_Turn_Around / n;
    printf("Average TurnAround Time: %.2f\n\n", avg_Turn_Around);
    return 0;
}
