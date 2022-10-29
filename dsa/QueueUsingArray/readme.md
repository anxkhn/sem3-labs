# Stack using Array

### Preprocessor directive

```c
#include <stdio.h>
// for scanf, printf
#include <stdlib.h>
// for exit(0) function
```

### Defining structure

```c
#define SIZE 10
// DEFINE is a macro 

struct queue
{
    int items[SIZE];
    int front;
    int rear;
} s1;
// Create a structure variable of queue called s1
```

### 1. Enqueue

```c
void enqueue()
{
    if (s1.rear == SIZE - 1)
    {
        printf("Oberflow.\n");
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
```

### 2. Dequeue

```c
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
```

### 3. Display

```c
void display()
{
    if (s1.rear == -1)
    {
        printf("Queue is empty.\n");
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
```

### Main Function

```c
void main()
{
    s1.top = -1;
    int n;
    while (1)
    {
        printf("Enter you choice\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Thank You!\n");
            exit(0);
            break;
        default:
            printf("Bad input.\n");
        }
    }
}
```
