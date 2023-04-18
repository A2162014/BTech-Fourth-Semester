/*
Experiment 06: Producer Consumer Problem using Semaphore.

Algorithm:

1.Define the constants BUFFER_SIZE, mutex, full, empty, and x with their initial values.

2.Define the wait and signal functions that take a pointer to an integer and return an integer.

3.Define the producer and consumer functions that acquire and release semaphores to synchronize the producer and consumer processes.

4.Define the main function.

5.Inside the main function, display the menu options and ask the user to enter their choice.

6.Validate the user input to ensure that the input is an integer between 1 and 3 inclusive.

7.Depending on the user's choice, call the producer or consumer function, or exit the program.

8.In the producer function, acquire the mutex, signal the full semaphore, wait on the empty semaphore, increment the value of x, print a message indicating that the producer has produced an item, and release the mutex.

9.In the consumer function, acquire the mutex, wait on the full semaphore, signal the empty semaphore, print a message indicating that the consumer has consumed an item, decrement the value of x, and release the mutex.

10.Repeat steps 5-9 until the user chooses to exit the program.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 3

int buffer[BUFFER_SIZE];
int in = 0, out = 0, count = 0;

void producer() {
    int item = rand();
    if (count < BUFFER_SIZE) {
        buffer[in] = item;
        printf("Producer produces item %d\n", item);
        in = (in + 1) % BUFFER_SIZE;
        count++;
    }
    else {
        printf("Buffer is full!\n");
    }
}

void consumer() {
    if (count > 0) {
        int item = buffer[out];
        printf("Consumer consumes item %d\n", item);
        out = (out + 1) % BUFFER_SIZE;
        count--;
    }
    else {
        printf("Buffer is empty!\n");
    }
}

int main() {
    printf("Producer-Consumer Problem using Circular Buffer\n");
    while (true) {
        printf("\n1. Produce\n2. Consume\n3. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                producer();
                break;
            case 2:
                consumer();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid Choice!\n");
                break;
        }
    }
    return 0;
}
