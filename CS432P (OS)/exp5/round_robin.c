/*
Experiment Name: Program for Round Robin for Scheduling.
Algorithm:
    1. The queue structure in ready queue is of First In First Out (FIFO) type.
    2. A fixed time is allotted to every process that arrives in the queue. This fixed time is known as time slice or time quantum.
    3. The first process that arrives is selected and sent to the processor for execution. If it is not able to complete
        its execution within the time quantum provided, then an interrupt is generated using an automated timer.
    4. The process is then stopped and is sent back at the end of the queue. However, the state is saved and context is thereby
        stored in memory. This helps the process to resume from the point where it was interrupted.
    5. The scheduler selects another process from the ready queue and dispatches it to the processor for its execution. It is executed until the time Quantum does not exceed.
    6. The same steps are repeated until all the process are finished.
*/
#include <stdio.h>

int main() {
    int n, time_quantum;
    printf("Enter the total number of processes: ");
    scanf("%d", &n);
    // process information arrays
    int arrival_time[n], burst_time[n], remaining_time[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &arrival_time[i], &burst_time[i]);
        remaining_time[i] = burst_time[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &time_quantum);

    // scheduling variables
    int total_wait_time = 0, total_turnaround_time = 0;
    int completed_processes = 0, current_time = 0;
    while (completed_processes < n) {
        for (int i = 0; i < n; i++) {
            if (remaining_time[i] <= 0) continue;// skip completed processes

            int time_taken = (remaining_time[i] < time_quantum) ? remaining_time[i] : time_quantum;
            remaining_time[i] -= time_taken;
            current_time += time_taken;

            if (remaining_time[i] == 0) {
                completed_processes++;
                int wait_time = current_time - arrival_time[i] - burst_time[i];
                int turnaround_time = current_time - arrival_time[i];
                total_wait_time += wait_time;
                total_turnaround_time += turnaround_time;
                printf("Process %d\t|\t%d\t|\t%d\n", i + 1, turnaround_time, wait_time);
            }
        }
    }

    printf("Average Waiting Time = %f\n", (float) total_wait_time / n);
    printf("Average Turnaround Time = %f\n", (float) total_turnaround_time / n);
    return 0;
}