/*
Experiment Name: Program for Shortest Job First (or SJF) scheduling
Algorithm:
    1. Sort all the processes in increasing order according to burst time.
    2. Input the processes along with their burst time (bt).
    3. Find waiting time (wt) for all processes.
    4. As first process that comes need not to wait so waiting time for process 1 will be 0
        i.e. wt[0] = 0.
    5. Find waiting time for all other processes i.e.
    for process i -> wt[i] = bt[i-1] + wt[i-1] .
    6. Find turnaround time = waiting_time + burst_time for all processes.
    7. Find average waiting time = total_waiting_time / no_of_processes.
    8. Similarly, find average turnaround time = total_turn_around_time/no_of_processes.
*/
#include <stdio.h>
void main()
{
    int bt[20], p[20], wt[20], tat[20], i, j, n, total = 0, pos, temp;
    float avg_wt, avg_tat;
    printf("Enter number of process:");
    scanf("%d", &n);
    printf("\nEnter Burst Time:\n");
    for (i = 0; i < n; i++)
    {
        printf("p%d:", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1; // contains process number
    }
    // sorting burst time in ascending order using selection sort
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (bt[j] < bt[pos])
                pos = j;
        }
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }
    wt[0] = 0; // waiting time for first process will be zero
    // calculate waiting time
    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];
        total += wt[i];
    }
    avg_wt = (float)total / n; // average waiting time
    total = 0;
    printf("\nProcess\t Burst Time \tWaiting Time\tTurnaround Time");
    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i]; // calculate turnaround time
        total += tat[i];
        printf("\np%d\t\t %d\t\t %d\t\t\t%d", p[i], bt[i], wt[i], tat[i]);
    }
    avg_tat = (float)total / n; // average turnaround time
    printf("\n\nAverage Waiting Time=%f", avg_wt);
    printf("\nAverage Turnaround Time=%f\n", avg_tat);
}
