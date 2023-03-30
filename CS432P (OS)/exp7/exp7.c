/*
Experiment 07: Dead-Lock Avoidance using Banker’s Algorithm.

Algorithm:

1.Initialize the available, allocation, and MAX matrices to represent the current state of the system and the maximum resources that each process may need.

2.Calculate the need matrix by subtracting the allocation matrix from the MAX matrix.

3.Loop until all processes are finished or a deadlock is detected.
    a. For each process i:
    i. If the process has not finished and its need is less than or equal to the available resources, mark it as finished and release its resources to the available pool.
    ii. If all processes can finish, then the system is in a safe state.
    iii. Otherwise, a deadlock has occurred and the system is in an unsafe state.

4.Output the processes in the order they were finished, if the system is in a safe state.

5.End.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_RESOURCES 5
#define MAX_PROCESSES 10

int available[MAX_RESOURCES];
int allocated[MAX_PROCESSES][MAX_RESOURCES];
int max[MAX_PROCESSES][MAX_RESOURCES];
int need[MAX_PROCESSES][MAX_RESOURCES];
int finished[MAX_PROCESSES];
int output[MAX_PROCESSES];
int num_processes;
int num_resources;
int count;

void print_output()
{
    printf("\nIdeal order of execution:\n");
    printf("<");
    for (int i = 0; i < num_processes; i++)
    {
        if (i < num_processes - 1)
            printf("P[%d], ", output[i]);
        else
            printf("P[%d]", output[i]);
    }
    printf(">\n\n");
}

int can_be_allocated(int process_index)
{
    for (int i = 0; i < num_resources; i++)
    {
        if (need[process_index][i] > available[i])
            return 0;
    }
    return 1;
}

void allocate_resources(int process_index)
{
    for (int i = 0; i < num_resources; i++)
    {
        available[i] += allocated[process_index][i];
        allocated[process_index][i] = 0;
        max[process_index][i] = 0;
        need[process_index][i] = 0;
    }
    finished[process_index] = 1;
}

void banker_algorithm()
{
    int k = 0;
    while (1)
    {
        int can_allocate = 0;
        for (int i = 0; i < num_processes; i++)
        {
            if (!finished[i] && can_be_allocated(i))
            {
                can_allocate = 1;
                output[k] = i;
                k++;
                allocate_resources(i);
            }
        }
        if (!can_allocate)
            break;
    }
    if (k == num_processes)
        print_output();
    else
        printf("\nDeadlock detected!\n");
}

int main()
{
    printf("\nDead-Lock Avoidance using Banker's Algorithm by 2162014\n");
    printf("\nEnter the number of resources: ");
    scanf("%d", &num_resources);

    printf("\nEnter the max instances of each resource:\n");
    for (int i = 0; i < num_resources; i++)
    {
        printf("%c = ", i + 97);
        scanf("%d", &available[i]);
    }

    printf("\nEnter the number of processes: ");
    scanf("%d", &num_processes);

    printf("\nEnter the allocation matrix:\n");
    for (int i = 0; i < num_processes; i++)
    {
        printf("P[%d]: \n", i);
        for (int j = 0; j < num_resources; j++)
        {
            printf("%c = ", j + 97);
            scanf("%d", &allocated[i][j]);
            available[j] -= allocated[i][j];
        }
        finished[i] = 0;
    }

    printf("\nEnter the max matrix:\n");
    for (int i = 0; i < num_processes; i++)
    {
        printf("P[%d]: \n", i);
        for (int j = 0; j < num_resources; j++)
        {
            printf("%c = ", j + 97);
            scanf("%d", &max[i][j]);
            need[i][j] = max[i][j] - allocated[i][j];
        }
    }

    banker_algorithm();

    return 0;
}
