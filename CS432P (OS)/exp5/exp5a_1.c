// A C program to implement the non-preemptive FCFS CPU scheduling algorithm and compute average waiting time and average turnaround time.
#include <stdio.h>
#include <stdlib.h>

struct Process
{
    int process_id;
    int arrival_time;
    int burst_time;
    int turnaround_time;
    int waiting_time;
};

void read_processes(struct Process *processes, int num_processes)
{
    printf("\n");
    for (int i = 0; i < num_processes; i++)
    {
        printf("Enter arrival time and burst time for process %d: ", i + 1);
        if (scanf("%d%d", &processes[i].arrival_time, &processes[i].burst_time) != 2 ||
            processes[i].burst_time < 0 || processes[i].arrival_time < 0)
        {
            printf("\nInvalid Input Error: Arrival time and Burst time must be non-negative integers.\n\n");
            exit(1);
        }
        processes[i].process_id = i + 1;
        processes[i].turnaround_time = 0;
        processes[i].waiting_time = 0;
    }
}

void sort_processes(struct Process *processes, int num_processes)
{
    for (int i = 0; i < num_processes - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < num_processes; j++)
        {
            if (processes[j].arrival_time < processes[min_idx].arrival_time ||
                (processes[j].arrival_time == processes[min_idx].arrival_time &&
                 processes[j].process_id < processes[min_idx].process_id))
                min_idx = j;
        }
        struct Process temp = processes[min_idx];
        processes[min_idx] = processes[i];
        processes[i] = temp;
    }
}

void compute_times(struct Process *processes, int num_processes)
{
    int completion_time = 0;

    printf("\nProcess \tCompletion time\n");
    for (int i = 0; i < num_processes; i++)
    {
        completion_time += processes[i].burst_time;
        printf("%d \t\t%d\n", i + 1, completion_time);
        processes[i].turnaround_time = completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
    }
}

void print_results(struct Process *processes, int num_processes, float avg_turnaround_time, float avg_waiting_time)
{
    printf("\nProcess \tArrival time \tBurst time \tTurnaround time \tWaiting time\n");
    for (int i = 0; i < num_processes; i++)
        printf("%d \t\t%d \t\t%d \t\t%d \t\t\t%d\n",
               processes[i].process_id,
               processes[i].arrival_time,
               processes[i].burst_time,
               processes[i].turnaround_time,
               processes[i].waiting_time);
    printf("\nAverage turnaround time: %.2f\n", avg_turnaround_time);
    printf("Average waiting time: %.2f\n\n", avg_waiting_time);
}

int main()
{
    int num_processes;
    float total_waiting_time = 0, total_turnaround_time = 0;
    struct Process *processes;

    printf("\n*FCFS CPU Scheduling Algorithm*\n");

    // Read number of processes
    printf("\nEnter number of processes: ");
    if (scanf("%d", &num_processes) != 1 || num_processes <= 0)
    {
        printf("\nInvalid Input Error: Number of processes must be a positive integer.\n\n");
        return 1;
    }

    // Allocate memory for the processes array
    processes = malloc(num_processes * sizeof(struct Process));
    if (processes == NULL)
    {
        printf("\nMemory Allocation Error: Failed to allocate memory for processes.\n\n");
        return 1;
    }

    // Read arrival time and burst time for each process
    read_processes(processes, num_processes);

    // Sort processes by arrival time and process ID
    sort_processes(processes, num_processes);

    printf("\n*Results*\n");

    // Compute waiting time and turnaround time for each process
    compute_times(processes, num_processes);

    // Compute average waiting time and average turnaround time
    for (int i = 0; i < num_processes; i++)
    {
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }
    float avg_waiting_time = total_waiting_time / num_processes;
    float avg_turnaround_time = total_turnaround_time / num_processes;

    // Print results
    print_results(processes, num_processes, avg_turnaround_time, avg_waiting_time);

    // Free memory allocated for the processes array
    free(processes);

    return 0;
}