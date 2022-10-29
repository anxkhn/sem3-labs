#include <stdio.h>
#include <stdlib.h>
// using stdlib.h for exit(0) function

#define SIZE 10

struct stack
{
    int items[SIZE];
    int top;
} s1;

void push()
{
    if (s1.top == SIZE - 1)
    {
        printf("Stack overflow.\n");
    }
    else
    {
        printf("Enter a number: ");
        int x;
        scanf("%d", &x);
        s1.top++;
        s1.items[s1.top] = x;
    }
    return;
}

void pop()
{
    if (s1.top == -1)
    {
        printf("Stack underflow.\n");
    }
    else
    {
        printf("Deleted item: %d\n", s1.items[s1.top]);
        s1.top--;
    }
    return;
}

void display()
{
    if (s1.top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    else
    {
        for (int i = s1.top; i >= 0; i--)
        {
            printf("%d\n", s1.items[i]);
        }
    }
    return;
}

void peek()
{
    if (s1.top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("%d\n", s1.items[s1.top]);
    }
    return;
}

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
