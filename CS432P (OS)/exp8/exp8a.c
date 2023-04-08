// Exp 8a - Memory Management using First Fit.
#include <stdio.h>
#include <stdbool.h>

#define MAX_BLOCKS 10
#define MAX_PROCESSES 10

typedef struct block {
    int size;
    int processId;
} block;

typedef struct process {
    int size;
    bool allocated;
} process;

block blocks[MAX_BLOCKS]; // Array of blocks
process processes[MAX_PROCESSES]; // Array of processes

int numBlocks = 0;
int numProcesses = 0;

void allocateBlocks() { // Function to allocate blocks to processes
    for (int i = 0; i < numProcesses; i++) { // Iterate through each process
        for (int j = 0; j < numBlocks; j++) { // Iterate through each block
            if (!processes[i].allocated && blocks[j].processId == -1 && blocks[j].size >= processes[i].size) {
                // If the process has not been allocated and the block is unoccupied and has enough space
                blocks[j].processId = i; // Assign the block to the process
                processes[i].allocated = true; // Mark the process as allocated
            }
        }
    }
}

void printAllocation() { // Function to print the allocation of blocks to processes
    printf("Block no.\tSize\t\tProcess no.\t\tSize\n");
    for (int i = 0; i < numBlocks; i++) { // Iterate through each block
        printf("%d\t\t%d\t\t", i + 1, blocks[i].size);
        if (blocks[i].processId != -1) { // If the block is assigned to a process
            printf("%d\t\t\t%d\n", blocks[i].processId + 1, processes[blocks[i].processId].size);
        } else {
            printf("Not allocated\n"); // If the block is unassigned
        }
    }
}

int main() {
    printf("Exp 8a - Memory Management using First Fit by 2162014\n");
    printf("Enter the number of blocks: ");
    scanf("%d", &numBlocks);
    printf("Enter the size of each block:\n");
    for (int i = 0; i < numBlocks; i++) { // Iterate through each block
        scanf("%d", &blocks[i].size);
        blocks[i].processId = -1; // Initialize the process ID to -1 to indicate that the block is unoccupied
    }

    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);
    printf("Enter the size of each process:\n");
    for (int i = 0; i < numProcesses; i++) { // Iterate through each process
        scanf("%d", &processes[i].size);
        processes[i].allocated = false; // Initialize the allocated flag to false
    }

    allocateBlocks(); // Allocate blocks to processes
    printAllocation(); // Print the allocation of blocks to processes
}
