// A C program to implement the preemptive priority CPU scheduling algorithm and compute average waiting time and average turnaround time.
#include <stdio.h>

// Define maximum number of processes
#define MAX_PROCESSES 10

// Define structure for process
typedef struct
{
    int pid;
    int burst_time;
    int priority;
    int arrival_time;
    int waiting_time;
    int turnaround_time;
} Process;

// Function to sort processes by arrival time and priority
void sort(Process *p, int n)
{
    int i, j;
    Process temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i].arrival_time > p[j].arrival_time)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            else if (p[i].arrival_time == p[j].arrival_time && p[i].priority > p[j].priority)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

// Function to compute waiting time and turnaround time for each process
void compute_times(Process *p, int n)
{
    int i;
    p[0].waiting_time = 0;
    p[0].turnaround_time = p[0].burst_time;
    for (i = 1; i < n; i++)
    {
        p[i].waiting_time = p[i - 1].turnaround_time + (p[i].arrival_time - p[i - 1].arrival_time);
        p[i].turnaround_time = p[i].waiting_time + p[i].burst_time;
    }
}

int main()
{
    // Define array of processes
    Process processes[MAX_PROCESSES];
    int i, n;
    float total_waiting_time = 0, total_turnaround_time = 0;

    printf("\n*Preemptive Priority CPU Scheduling Algorithm*\n");

    // Get input from user
    printf("\nEnter number of processes: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("\nInvalid Input Error: Number of processes must be a positive integer.\n\n");
        return 1;
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the burst time, priority, and arrival time for process %d: ", i + 1);
        if (scanf("%d%d%d", &processes[i].burst_time, &processes[i].priority, &processes[i].arrival_time) != 3 ||
            processes[i].burst_time < 0 || processes[i].arrival_time < 0 || processes[i].priority < 0)
        {
            printf("\nInvalid Input Error: Arrival time and Burst time must be non-negative integers.\n\n");
            return 1;
        }
        processes[i].pid = i + 1;
    }

    // Sort processes by arrival time and priority
    sort(processes, n);

    // Compute waiting time and turnaround time for each process
    compute_times(processes, n);

    printf("\n*Results*\n");

    // Print results for each process
    printf("\nProcess \tBurst Time \tPriority \tArrival Time \tWaiting Time \tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d\n", processes[i].pid, processes[i].burst_time, processes[i].priority, processes[i].arrival_time, processes[i].waiting_time, processes[i].turnaround_time);
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    // Print average waiting time and average turnaround time
    printf("\nAverage waiting time = %.2f\n", total_waiting_time / n);
    printf("Average turnaround time = %.2f\n\n", total_turnaround_time / n);

    return 0;
}