//
// Created by ashvath on 08-04-2023.
// Exp 8b - Memory Management using Best Fit.
//
// Header files
#include <stdio.h>
#include <stdlib.h>

// Constants
#define MAX_BLOCKS 20
#define MAX_PROCESSES 20

// Function declaration
void allocateMemory(int blockSizes[], int processSizes[], int numBlocks, int numProcesses);

// Main function
int main() {
    int blockSizes[MAX_BLOCKS], processSizes[MAX_PROCESSES];
    int numBlocks, numProcesses, i;
    // Print the program title
    printf("Memory Management Scheme - Best Fit by 2162014\n");

    // Get the number of blocks and processes
    printf("Enter the number of blocks: ");
    scanf("%d", &numBlocks);

    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);

    // Check if the number of blocks and processes are within the limit
    if (numBlocks > MAX_BLOCKS || numProcesses > MAX_PROCESSES) {
        printf("Error: Exceeded maximum number of blocks or processes.\n");
        exit(1);
    }

    // Get the sizes of the blocks and
    printf("Enter the size of the blocks:\n");
    for (i = 0; i < numBlocks; i++) {
        printf("Block %d: ", i + 1);
        scanf("%d", &blockSizes[i]);
    }

    printf("Enter the size of the processes:\n");
    for (i = 0; i < numProcesses; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &processSizes[i]);
    }

    // Allocate memory using the best fit algorithm
    allocateMemory(blockSizes, processSizes, numBlocks, numProcesses);

    return 0;
}

// Function definition for memory allocation using best fit algorithm
void allocateMemory(int blockSizes[], int processSizes[], int numBlocks, int numProcesses) {
    // Declare and initialize arrays
    int fragment[MAX_PROCESSES], pArray[MAX_PROCESSES], bArray[MAX_BLOCKS] = {0};
    int i, j, lowest, temp;
    for (i = 0; i < numProcesses; i++) {
        pArray[i] = -1;// initialize process array to -1
    }

    // Loop through all the processes and blocks to allocate memory
    for (i = 0; i < numProcesses; i++) {
        lowest = 9999;

        for (j = 0; j < numBlocks; j++) {
            if (!bArray[j] && blockSizes[j] >= processSizes[i]) {
                temp = blockSizes[j] - processSizes[i];
                if (temp < lowest) {
                    pArray[i] = j;// store the block number
                    lowest = temp;
                }
            }
        }

        // Allocate memory and calculate fragmentation
        if (pArray[i] != -1) {
            bArray[pArray[i]] = 1;// mark the block as used
            fragment[i] = lowest;
        }
    }

    // Print the allocation results
    printf("\nProcess No.\tProcess Size\tBlock No.\tBlock Size\tFragmentation\n");
    for (i = 0; i < numProcesses; i++) {
        if (pArray[i] != -1) {
            printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, processSizes[i], pArray[i] + 1, blockSizes[pArray[i]],
                   fragment[i]);
        } else {
            printf("%d\t\t%d\t\t%s\n", i + 1, processSizes[i], "Not Allocated");
        }
    }
}