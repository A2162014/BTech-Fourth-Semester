#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

// Function to calculate the sum of odd numbers
int calculate_odd_sum(int input_num) {
    int sum = 1;
    for (int i = 1; i < input_num; i += 2) {
        printf("%d\n", i);
        sum += i;
    }
    printf("Odd sum:%d\n", sum);
    return sum;
}

// Function to calculate the sum of even numbers
int calculate_even_sum(int input_num) {
    int sum = 0;
    for (int i = 0; i < input_num; i += 2) {
        printf("%d\n", i);
        sum += i;
    }
    printf("Even sum:%d\n", sum);
    return sum;
}

int main() {
    pid_t pid;
    int input_num, child_sum, parent_sum;

    // Prompt user for input
    printf("Enter a value for n: ");
    if (scanf("%d", &input_num) != 1) {
        printf("Invalid input. Please enter an integer value.\n");
        exit(EXIT_FAILURE);
    }

    pid = fork();
    if (pid == -1) {
        printf("Error: Unable to create child process\n");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) {
        // Child process
        printf("Child process, PID = %u\n", getpid());
        printf("Parent of child process, PID = %u\n", getppid());

        // Calculate the sum of odd numbers
        child_sum = calculate_odd_sum(input_num);

        // Exit with error code if an error occurred
        if (child_sum == -1) {
            exit(EXIT_FAILURE);
        }

        exit(EXIT_SUCCESS);
    }
    else {
        // Parent process
        printf("Parent process, PID = %u\n", getpid());
        printf("Parent of parent process, PID = %u\n", getppid());

        // Calculate the sum of even numbers
        parent_sum = calculate_even_sum(input_num);

        // Wait for child process to finish
        int status;
        if (wait(&status) == -1) {
            printf("Error: Unable to wait for child process\n");
            exit(EXIT_FAILURE);
        }

        // Check if child process exited with an error code
        if (WIFEXITED(status) && WEXITSTATUS(status) == EXIT_FAILURE) {
            exit(EXIT_FAILURE);
        }
    }

    // Optional exit calls for clarity
    exit(EXIT_SUCCESS);
}
