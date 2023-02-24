#include <stdio.h>

// Function to calculate waiting time
void waiting_time(int n, int bt[], int wt[])
{
    // Waiting time for the first process is 0
    wt[0] = 0;

    // Calculate waiting time for all other processes
    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}

// Function to calculate turnaround time
void turnaround_time(int n, int bt[], int wt[], int tat[])
{
    // Calculate turnaround time for all processes
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

// Function to calculate average time
void avg_time(int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    waiting_time(n, bt, wt);
    turnaround_time(n, bt, wt, tat);

    printf("Processes\tBurst time\tWaiting time\tTurnaround time\n");

    for (int i = 0; i < n; i++)
    {
        total_wt += wt[i];
        total_tat += tat[i];

        printf("%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;

    printf("Average waiting time = %0.2f\n", avg_wt);
    printf("Average turnaround time = %0.2f\n", avg_tat);
}

// Main function
int main()
{
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int bt[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    avg_time(n, bt);

    return 0;
}