/*
Experiment Name: Program for First Come First Served (FCFS) scheduling
Algorithm:
	1. Input the processes along with their burst time (bt).
	2. Find waiting time (wt) for all processes.
	3. As first process that comes need not to wait so waiting time for process 1 will be 0 i.e. wt[0] = 0.
	4. Find waiting time for all other processes i.e.
		for process i -> wt[i] = bt[i-1] + wt[i-1] .
	5. Find turnaround time = waiting_time + burst_time for all processes.
	6. Find average waiting time = total_waiting_time / no_of_processes.
	7. Similarly, find average turnaround time = total_turn_around_time/no_of_processes.
*/
#include <stdio.h>
int main(void)
{
	int n, bt[20], wt[20], tat[20], avwt = 0, avtat = 0, i, j, k;
	printf("Enter total number of processes(maximum 20):");
	scanf("%d", &n);
	printf("\nEnter Process Burst Time\n");
	for (i = 0; i < n; i++)
	{
		printf("P[%d]:", i + 1);
		scanf("%d", &bt[i]);
	}
	wt[0] = 0; // waiting time for first process is 0
	// calculating waiting time
	for (i = 1; i < n; i++)
	{
		wt[i] = 0;
		for (j = 0; j < i; j++)
			wt[i] += bt[j];
	}
	printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
	// calculating turnaround time
	for (i = 0; i < n; i++)
	{
		tat[i] = bt[i] + wt[i];
		avwt += wt[i];
		avtat += tat[i];
		printf("\nP[%d]\t\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);
	}
	avwt /= i;
	avtat /= i;
	printf("\n\nAverage Waiting Time:%d", avwt);
	printf("\nAverage Turnaround Time:%d", avtat);
	return 0;
}
