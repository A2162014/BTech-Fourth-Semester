// A C program to implement the non-preemptive FCFS CPU scheduling algorithm and compute average waiting time and average turnaround time.
/*
 * FCFS Scheduling Program with Arrival Time in C
 */

#include <stdio.h>

const int MAX_SIZE = 10;

int main()
{
    int at[MAX_SIZE], bt[MAX_SIZE];
    int n;

    printf("\n*Non Preemptive FCFS CPU Scheduling Algorithm*\n");

    printf("\nEnter the number of processes: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE)
    {
        printf("\nInput Error: The number of process must be between 1 and %d\n\n", MAX_SIZE);
        return 1;
    }
    printf("\nEnter arrival time and burst time of all the processes:\n");
    for (int i = 0; i < n; i++)
    {
        printf("process %d: ", i + 1);
        if (scanf("%d%d", &at[i], &bt[i]) != 2 || at[i] < 0 || bt[i] < 0)
        {
            printf("\nInput Error: The arrival time and brust time must be positive\n\n");
            return 1;
        }
    }

    int i, wt[n], tt[n], ct[n];
    wt[0] = 0;
    ct[0] = bt[0] + at[0];

    // for calculating waiting time of each process
    for (i = 1; i < n; i++)
    {
        wt[i] = ct[i - 1] - at[i];
        ct[i] = ct[i - 1] + bt[i];
        if (wt[i] < 0)
            wt[i] = 0;
    }

    printf("\n*Results*\n");

    printf("\nprocess \tArrival Time \tBurst Time \tWaiting Time \tCompletion Time \tTurnaround Time\n");
    float twt = 0.0, ttt = 0.0;
    for (i = 0; i < n; i++)
    {
        tt[n] = ct[i] - at[i];
        if (tt[n] < 0)
            tt[n] = 0;
        printf("%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t\t%d\n", i + 1, at[i], bt[i], wt[i], ct[i], tt[n]);
        twt += wt[i];
        ttt += ct[i] - at[i];
    }
    float awt, att;

    // for calculating average waiting time
    awt = twt / n;

    // for calculating average turnaround time
    att = ttt / n;
    printf("\nAvg. waiting time = %.3f\n", awt);
    printf("Avg. turnaround time = %.3f\n\n", att);
}
