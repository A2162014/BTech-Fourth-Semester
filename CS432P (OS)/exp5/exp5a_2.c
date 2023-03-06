// A C program to implement the preemptive Round Robin CPU scheduling algorithm and compute average waiting time and average turnaround time.
#include <stdio.h>
#include <stdlib.h>

// Define Process structure
struct Process
{
    int process_id;
    int arrival_time;
    int burst_time;
    int turnaround_time;
    int waiting_time;
};

// Read arrival time and burst time for each process
int read_processes(struct Process *processes, int num_processes)
{
    printf("\n");
    // Loop over each process and read arrival time and burst time
    for (int i = 0; i < num_processes; i++)
    {
        printf("Enter the arrival and burst time of process %d: ", i + 1);
        // Check if arrival time and burst time are valid
        if (scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time) != 2 || processes[i].arrival_time < 0 || processes[i].burst_time < 0)
        {
            printf("\nInvalid Input Error: Arrival time and Burst time must be non-negative integers.\n\n");
            return 1;
        }
        // Assign process ID, turnaround time and waiting time to the current process
        processes[i].process_id = i + 1;
        processes[i].turnaround_time = 0;
        processes[i].waiting_time = 0;
    }
    return 0;
}

// Print the results of the Round Robin algorithm
void print_results(struct Process *processes, int num_processes, int time_quantum)
{
    int temp_bt[num_processes];
    int count = 0, completion_time = 0, y = num_processes;
    float total_turnaround_time = 0, total_waiting_time = 0;

    // Copy the burst time of each process to a temporary array
    for (int i = 0; i < num_processes; i++)
    {
        temp_bt[i] = processes[i].burst_time;
    }

    // Print table header
    printf("\nProcess \tArrival Time \tBurst Time \tCompletion Time \tTurnaround Time \tWaiting Time\n");

    int i = 0;
    // Loop until all processes have been completed
    while (y != 0)
    {
        // If the remaining burst time of the current process is less than or equal to the time quantum, complete the process
        if (temp_bt[i] <= time_quantum && temp_bt[i] > 0)
        {
            completion_time += temp_bt[i];
            temp_bt[i] = 0;
            count = 1;
        }
        // If the remaining burst time of the current process is greater than the time quantum, execute the process for one time quantum
        else if (temp_bt[i] > 0)
        {
            temp_bt[i] -= time_quantum;
            completion_time += time_quantum;
        }
        // If the remaining burst time of the current process is 0 and the process has not been completed yet, complete the process
        if (temp_bt[i] == 0 && count == 1)
        {
            y--;
            // Calculate turnaround time and waiting time for the completed process
            printf("%d \t\t%d \t\t%d \t\t%d \t\t\t%d \t\t\t%d\n",
                   i + 1,
                   processes[i].arrival_time,
                   processes[i].burst_time,
                   completion_time,
                   completion_time - processes[i].arrival_time,
                   completion_time - processes[i].arrival_time - processes[i].burst_time);
            total_turnaround_time += completion_time - processes[i].arrival_time;
            total_waiting_time += completion_time - processes[i].arrival_time - processes[i].burst_time;
            count = 0;
        }
        // move to the next process in the queue
        i = (i + 1) % num_processes;
    }
    // Compute average waiting time and average turnaround time
    float avg_turnaround_time = total_turnaround_time * 1.0 / num_processes;
    float avg_waiting_time = total_waiting_time * 1.0 / num_processes;
    printf("\nAverage Turnaround time: %.2f\n", avg_turnaround_time);
    printf("Average Waiting time: %.2f\n\n", avg_waiting_time);
}

int main()
{
    int num_processes, time_quantum;
    struct Process *processes;

    printf("\n*Round Robin CPU Scheduling Algorithm*\n");

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
    if (read_processes(processes, num_processes) == 1)
    {
        // Free memory allocated for the processes array
        free(processes);
        return 1;
    }

    // Read time quantum
    printf("\nEnter the quantum: ");
    if (scanf("%d", &time_quantum) != 1 || time_quantum < 0)
    {
        printf("\nInvalid Input Error: Time quantum must be non-negative integers.\n\n");
        free(processes);
        return 1;
    }

    printf("\n*Results*\n");

    // Print results
    print_results(processes, num_processes, time_quantum);

    free(processes);

    return 0;
}