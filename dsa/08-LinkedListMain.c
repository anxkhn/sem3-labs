#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void lastinsert();
void specificinsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void main()
{
    int choice = 0;
    while (choice != 8)
    {
        printf("\n\nChoose An Option \n1. Insert at beginning\n2. Insert at last\n3. Insert at any specific location\n4. Delete from beginning\n5. Delete from last\n6. Delete node after specified location\n7. Show\n8. Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            specificinsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Please enter valid choice ");
        }
    }
}
void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted.");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted.");
        }
    }
}
void specificinsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert.");
        scanf("\n%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\nCan't insert.\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted.");
    }
}
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the beginning.\n");
    }
}
void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("Empty\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted.\n");
    }

    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last.\n");
    }
}
void random_delete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    printf("\n Enter the location of the node after which you want to perform deletion. \n");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete.");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\nDeleted node %d ", loc + 1);
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Empty.");
    }
    else
    {
        printf("\nPrinting values.\n");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}
