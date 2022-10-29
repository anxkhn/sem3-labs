#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

struct queue
{
    int items[SIZE];
    int front;
    int rear;
} s1;

// Function created to handle enqueue
void enqueue()
{
    if (s1.rear == SIZE - 1)
    {
        printf("Can't enqueue as the queue is full\n");
    }
    else
    {
        // The first element condition
        if (s1.front == -1)
        {
            s1.front = 0;
        }
        printf("Enter a number: ");
        int x;
        scanf("%d", &x);
        s1.rear++;
        s1.items[s1.rear] = x;
    }
    return;
}

// Function created to handle dequeue
void dequeue()
{
    if (s1.front == -1)
    {
        printf("Can't dequeue as the queue is empty\n");
    }
    else
    {
        printf("Dequeued item: %d\n", s1.items[s1.front]);
        s1.front++;

        // Only happens when the last element was dequeued
        if (s1.front > s1.rear)
        {
            s1.front = -1;
            s1.rear = -1;
        }
    }
    return;
}

// function to print the queue
void display()
{
    if (s1.rear == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        for (int i = s1.front; i <= s1.rear; i++)
        {
            printf("%d ", s1.items[i]);
        }
    }
    return;
}

void main()
{
    s1.front = -1;
    s1.rear = -1;
    int n;
    while (1)
    {
        printf("\nEnter you choice\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank you!");
            exit(0);
            break;
        default:
            printf("Bad input.\n");
        }
    }
}