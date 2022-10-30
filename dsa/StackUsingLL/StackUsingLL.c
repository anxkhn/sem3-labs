#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

void push()
{
	int val;
	printf("Enter a number: ");
	scanf("%d", &val);
	// create new node
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = val;

	// make the new node points to the head node
	newNode->next = head;

	// make the new node as head node
	// so that head will always point the last inserted data
	head = newNode;
}

void pop()
{
	// temp is used to free the head node
	struct node *temp;

	if (head == NULL)
		printf("Stack is Empty\n");
	else
	{
		printf("Poped element = %d\n", head->data);

		// backup the head node
		temp = head;

		// make the head node points to the next node.
		// logically removing the node
		head = head->next;

		// free the poped element's memory
		free(temp);
	}
}

// print the linked list
void display()
{
	struct node *temp = head;

	// iterate the entire linked list and print the data
	while (temp != NULL)
	{
		printf("\n%d->", temp->data);
		temp = temp->next;
	}
	printf("\n-----\n");
}

void main()
{
	int choice = 0;
	while (choice != 4)
	{
		printf("\nChoose An Option \n1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Enter your choice?\n");
		scanf("%d", &choice);
		switch (choice)
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
			exit(0);
			break;
		default:
			printf("Please enter valid choice ");
		}
	}
}
