#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

struct queue
{
    int items[SIZE];
    int front;
    int rear;
} s1;


void enqueue()
{
    if (s1.rear == SIZE - 1)
    {
        printf("Overflow.\n");
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


void dequeue()
{
    if (s1.front == -1)
    {
        printf("Underflow.\n");
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

void display()
{
    if (s1.rear == -1)
    {
        printf("Empty.\n");
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
