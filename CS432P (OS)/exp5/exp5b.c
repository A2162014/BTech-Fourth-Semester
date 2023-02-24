#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int pid;             // process id
    int arrival_time;    // arrival time
    int burst_time;      // burst time
    int remaining_time;  // remaining time to complete execution
    int waiting_time;    // waiting time
    int turnaround_time; // turnaround time
    int completion_time; // completion time
} process;

int main()
{
    int n, quantum, i, j, time = 0, completed = 0;
    float avg_waiting_time = 0, avg_turnaround_time = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    process *processes = (process *)malloc(n * sizeof(process));

    // Input the arrival time and burst time for each process
    for (i = 0; i < n; i++)
    {
        printf("Enter the arrival time and burst time for process %d: ", i + 1);
        scanf("%d%d", &processes[i].arrival_time, &processes[i].burst_time);
        processes[i].pid = i + 1;
        processes[i].remaining_time = processes[i].burst_time;
    }

    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    printf("Process \tArrival Time \tBurst Time \tCompletion Time \tTurnaround Time \tWaiting Time\n");

    // Run the round robin scheduling algorithm
    while (completed < n)
    {
        for (i = 0; i < n; i++)
        {
            if (processes[i].remaining_time > 0)
            {
                if (processes[i].remaining_time > quantum)
                {
                    // Execute the process for the time quantum
                    time += quantum;
                    processes[i].remaining_time -= quantum;
                }
                else
                {
                    // Execute the process for the remaining time
                    time += processes[i].remaining_time;
                    processes[i].completion_time = time;
                    processes[i].remaining_time = 0;
                    completed++;

                    // Calculate waiting time and turnaround time
                    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;

                    // Calculate average waiting time and average turnaround time
                    avg_waiting_time += processes[i].waiting_time;
                    avg_turnaround_time += processes[i].turnaround_time;
                }
            }
        }
    }

    // Print the results for each process
    for (i = 0; i < n; i++)
    {
        printf("%d \t\t%d \t\t%d \t\t%d \t\t\t%d \t\t\t%d\n", processes[i].pid, processes[i].arrival_time, processes[i].burst_time,
               processes[i].completion_time, processes[i].turnaround_time, processes[i].waiting_time);
    }

    // Calculate and print the average waiting time and average turnaround time
    avg_waiting_time /= n;
    avg_turnaround_time /= n;
    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    free(processes);
    return 0;
}