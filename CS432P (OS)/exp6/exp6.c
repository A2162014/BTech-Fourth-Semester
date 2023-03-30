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

#define BUFFER_SIZE 3

int mutex = 1, full = 0, empty = BUFFER_SIZE, x = 0;

void producer();
void consumer();
int wait(int *);
int signal(int *);

int main()
{
    int n;
    printf("\nProducer Consumer Problem using Semaphore by 2162014\n");
    printf("\n1.Producer\n2.Consumer\n3.Exit\n");
    while (1)
    {
        printf("\nEnter your choice: ");
        if (scanf("%d", &n) != 1)
        {
            printf("Invalid input!\n");
            continue;
        }
        switch (n)
        {
        case 1:
            if (empty == 0)
                printf("Buffer is full!!\n");
            else
                producer();
            break;
        case 2:
            if (full == 0)
                printf("Buffer is empty!!\n");
            else
                consumer();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}

int wait(int *s)
{
    return --(*s);
}

int signal(int *s)
{
    return ++(*s);
}

void producer()
{
    mutex = wait(&mutex);
    full = signal(&full);
    empty = wait(&empty);
    x++;
    printf("Producer produces the item %d\n", x);
    mutex = signal(&mutex);
}

void consumer()
{
    mutex = wait(&mutex);
    full = wait(&full);
    empty = signal(&empty);
    printf("Consumer consumes item %d\n", x);
    x--;
    mutex = signal(&mutex);
}
