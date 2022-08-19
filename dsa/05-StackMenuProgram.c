#include<stdio.h>
#define SIZE 10

struct stack {
    int items[SIZE];
    int top;
}s1;

void push() {

    if (s1.top == SIZE - 1) {
        printf("Stack overflow.\n");
    } 
	else {
        int x;
        printf("Enter a number: ");
        scanf("%d", & x);
        s1.top++;
        s1.items[s1.top] = x;
        return;
    }
}

void pop() {
    if (s1.top == -1) {
        printf("Stack underflow.\n");
        return;
    } 
	else {
        printf("Deleted item: %d\n", s1.items[s1.top]);
        s1.top--;
    }
    return;
}

void display() {
    if (s1.top == -1) {
        printf("Stack is empty.\n");
        return;
    } 
	else {
        for (int i = s1.top; i >= 0; i--) {
            printf("%d\n", s1.items[i]);
        }
    }
    return;
}

void peek() {
    if (s1.top == 0) {
        printf("Stack is empty.\n");
        return;
    } 
	else {

        printf("%d\n", s1.items[s1.top]);
    }
}

void main() {
    int flag = 1;
    s1.top = -1;
    int n;
    while (flag) {
        printf("Enter you choice\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        scanf("%d", & n);
        switch (n) {
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
            flag = 0;
            break;
        default:
            printf("Bad input.\n");
        }
    }
}