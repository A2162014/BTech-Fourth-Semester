// Experiment No: 9b - Memory Management using First In First Out Replacement Algorithm.
#include <stdio.h>

int main() {
    // Declare variables
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;

    printf("Memory Management Scheme - FIFO by 2162014\n");
    
    // Prompt user for input
    printf("Enter the number of pages: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0 || n > 50) {
        printf("Invalid input for number of pages.\n");
        return 0;
    }

    printf("Enter the page numbers: ");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number of frames: ");
    scanf("%d", &no);

    // Validate input
    if (no <= 0 || no > 10) {
        printf("Invalid input for number of frames.\n");
        return 0;
    }

    for (i = 0; i < no; i++)
        frame[i] = -1;

    j = 0;

    // Print table header
    printf("\nRef String\tPage Frames\n");

    // Implement FIFO page replacement algorithm
    for (i = 1; i <= n; i++) {
        printf("%d\t\t", a[i]);
        avail = 0;

        for (k = 0; k < no; k++) {
            if (frame[k] == a[i])
                avail = 1;
        }

        if (avail == 0) {
            frame[j] = a[i];
            j = (j + 1) % no;
            count++;

            for (k = 0; k < no; k++)
                printf("%d\t", frame[k]);
        }

        printf("\n");
    }

    // Print page fault count
    printf("Page Faults: %d\n", count);

    return 0;
}
