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

struct stack
{
    int items[SIZE];
    int top;
} s1;
// Create a structure variable of stack called s1
```

### 1. Push

```c
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
```

### 2. Pop

```c
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
```

### 3. Display

```c
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
```

### 4. Peek

```c
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
