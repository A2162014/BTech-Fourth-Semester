// Experiment No: 9a - Memory Management using Worst Fit
#include <stdio.h>
#include <stdlib.h>

#define MAX_BLOCKS 25
#define MAX_PROCESSES 25

void input_sizes(int arr[], int size, char type) {
    printf("Enter the size of the %cs:\n", type);
    for (int i = 1; i <= size; i++) {
        printf("%c %d:", type, i);
        scanf("%d", &arr[i]);
    }
}

void allocate_blocks(int block_sizes[], int process_sizes[], int assigned_blocks[],
                     int num_blocks, int num_processes) {
    int frag[MAX_PROCESSES], bf[MAX_BLOCKS] = {0}, ff[MAX_PROCESSES] = {0};
    int highest = 0, temp;

    for (int i = 1; i <= num_processes; i++) {
        for (int j = 1; j <= num_blocks; j++) {
            if (bf[j] == 0) {// if bf[j] is not allocated
                temp = block_sizes[j] - process_sizes[i];
                if (temp >= 0 && highest < temp) {
                    ff[i] = j;
                    highest = temp;
                }
            }
        }

        assigned_blocks[i] = ff[i];
        frag[i] = highest;
        bf[ff[i]] = 1;
        highest = 0;
    }

    printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement\n");
    for (int i = 1; i <= num_processes; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, process_sizes[i],
               assigned_blocks[i], block_sizes[assigned_blocks[i]], frag[i]);
    }
}

int main() {
    int block_sizes[MAX_BLOCKS], process_sizes[MAX_PROCESSES], assigned_blocks[MAX_PROCESSES];
    int num_blocks, num_processes;

    printf("Memory Management Scheme - Worst Fit by 2162014\n");
    printf("Enter the number of blocks:");
    scanf("%d", &num_blocks);
    printf("Enter the number of files:");
    scanf("%d", &num_processes);

    input_sizes(block_sizes, num_blocks, 'B');
    input_sizes(process_sizes, num_processes, 'F');

    allocate_blocks(block_sizes, process_sizes, assigned_blocks, num_blocks, num_processes);

    return 0;
}
