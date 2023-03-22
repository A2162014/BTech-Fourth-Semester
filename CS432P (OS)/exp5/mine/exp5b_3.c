// A C program to implement the preemptive SJF CPU scheduling algorithm and compute average waiting time and average turnaround time.
// Note: Non-preemptive SJF minimizes the average turnaround time for processes, while preemptive SJF minimizes the average waiting time for processes.
#include <stdio.h>
#include <limits.h>

struct Process
{
    int pid;
    int arrival_time;
    int burst_time;
    int remaining;
    int comp_time;
    int wait_time;
    int turn_time;
};
 
void SJF(struct Process p[], int n);
void CalculateWaitingTime(struct Process p[], int n);
void CalculateTurnaroundTime(struct Process p[], int n);
void PrintResults(struct Process p[], int n, float avg_wt, float avg_tat);
int GetIntegerInput(char message[]);
int GetPositiveIntegerInput(char message[]);

int main()
{
    int n;

    printf("\n*Preemptive SJF CPU Scheduling Algorithm*\n");

    // Get number of processes from user
    n = GetPositiveIntegerInput("\nEnter the number of processes: ");

    // Get process details from user
    struct Process p[n];
    printf("\nEnter process details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nProcess %d\n", i + 1);
        p[i].pid = i + 1;
        p[i].arrival_time = GetPositiveIntegerInput("Arrival time: ");
        p[i].burst_time = GetPositiveIntegerInput("Burst time: ");
        p[i].remaining = p[i].burst_time;
    }

    // Calculate waiting time, turnaround time and average time
    SJF(p, n);
    float avg_wt = 0, avg_tat = 0;
    for (int i = 0; i < n; i++)
    {
        avg_wt += p[i].wait_time;
        avg_tat += p[i].turn_time;
    }
    avg_wt /= n;
    avg_tat /= n;

    // Print results
    PrintResults(p, n, avg_wt, avg_tat);

    return 0;
}

void SJF(struct Process p[], int n)
{
    int time = 0, count = 0;

    while (count != n)
    {
        int shortest = -1, shortest_burst_time = INT_MAX;

        // Find process with shortest remaining burst time
        for (int i = 0; i < n; i++)
        {
            if (p[i].arrival_time <= time && p[i].remaining < shortest_burst_time && p[i].remaining > 0)
            {
                shortest = i;
                shortest_burst_time = p[i].remaining;
            }
        }

        // If no process is available, increment time
        if (shortest == -1)
            time++;
        else
        {
            // Decrement remaining burst time of selected process
            p[shortest].remaining--;

            // Update completion time if process is completed
            if (p[shortest].remaining == 0)
            {
                count++;
                p[shortest].comp_time = time + 1;
            }

            // Increment time
            time++;
        }
    }

    // Calculate waiting time and turnaround time
    CalculateTurnaroundTime(p, n);
    CalculateWaitingTime(p, n);
}

void CalculateWaitingTime(struct Process p[], int n)
{
    for (int i = 0; i < n; i++)
        p[i].wait_time = p[i].comp_time - p[i].arrival_time - p[i].burst_time;
}

void CalculateTurnaroundTime(struct Process p[], int n)
{
    for (int i = 0; i < n; i++)
        p[i].turn_time = p[i].comp_time - p[i].arrival_time;
}

void PrintResults(struct Process p[], int n, float avg_wt, float avg_tat)
{
    // Sort processes in ascending order of completion time
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].comp_time > p[j + 1].comp_time)
            {
                struct Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("\n*Result*\n");
    printf("\nProcess \tArrival Time \tBurst Time \tCompletion Time \tWaiting Time \tTurnaround Time\n");
    for (int i = 0; i < n; i++)
        printf("%d \t\t%d \t\t%d \t\t%d \t\t\t%d \t\t\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time, p[i].comp_time, p[i].wait_time, p[i].turn_time);
    printf("\nAverage Waiting Time: %.2f\n", avg_wt);
    printf("Average Turnaround Time: %.2f\n\n", avg_tat);
}

int GetIntegerInput(char message[])
{
    int value;
    printf("%s", message);
    scanf("%d", &value);
    return value;
}

int GetPositiveIntegerInput(char message[])
{
    int value;
    do
    {
        value = GetIntegerInput(message);
        if (value < 0)
            printf("Invalid Input Error: Please enter a positive integer.\n");
    } while (value < 0);
    return value;
}
