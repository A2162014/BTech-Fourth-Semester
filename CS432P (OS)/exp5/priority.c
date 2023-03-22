/*
Experiment Name: Program for Priority (Non Pre-emptive) for Scheduling.
Algorithm:
    ● Priority scheduling is a non-preemptive algorithm and one of the most common scheduling algorithms in batch systems.
    ● Each process is assigned a priority. Process with highest priority is to be executed first and so on.
    ● Processes with same priority are executed on first come first served basis.
    ● Priority can be decided based on memory requirements, time requirements or any other resource requirement.
*/
#include <stdio.h>
int main()
{
    int bt[20], p[20], wt[20], tat[20], pr[20], i, j, n, total = 0, pos, temp, avg_wt, avg_tat;
    printf("Enter Total Number of Process:");
    scanf("%d", &n);
    printf("\nEnter Burst Time and Priority\n");
    for (i = 0; i < n; i++)
    {
        printf("\nP[%d]\n", i + 1);
        printf("Burst Time:");
        scanf("%d", &bt[i]);
        printf("Priority:");
        scanf("%d", &pr[i]);
        p[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[pos])
                pos = j;
        }
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];
        total += wt[i];
    }
    avg_wt = total / n;
    total = 0;
    printf("\nProcess\t Burst Time \tWaiting Time\tTurnaround Time");
    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        total += tat[i];
        printf("\nP[%d]\t\t %d\t\t %d\t\t\t%d", p[i], bt[i], wt[i], tat[i]);
    }
    avg_tat = total / n;
    printf("\n\nAverage Waiting Time=%d", avg_wt);
    printf("\nAverage Turnaround Time=%d\n", avg_tat);
    return 0;
}
