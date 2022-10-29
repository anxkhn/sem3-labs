#include <stdio.h>
#include <stdlib.h>
// SORTED LINKEDLIST

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int num)
{
    struct node *temp;
    temp = head;
    struct node *new = (struct node *)malloc(sizeof(struct node));
  //initializing a new node to be inserted
    new->data = num;
    new->next = NULL;
//list is empty or smallest element then insert at beginning
    if (temp == NULL || head->data >= num)
    {
        new->next = head;
        head = new;
    }
  
    else
    { 
//the node youre at isnt the last node (next not null) and
//data is greater than current node youre at, keep moving
      //shortcircuit condition because you don't want to access memeory which does not exist
        while (temp->next != NULL && temp->next->data < num)
        {
            temp = temp->next;
        }
//you stop moving and insert when data is just greater than current node
//or last element reached
        new->next = temp->next;
        temp->next = new;
    }
    return head;
}

struct node *del(struct node *head, int num)
{
    struct node *temp, *node2del;
    temp = head;
    if (temp == NULL)
    {
        printf("EMPTY LL\n");
        // return head;
    }
    else
      //list not empty
    {
        // delete at first
        if (temp->data == num)
        {
            //assign node 2 as head
            head = temp->next;
          // freeing temp's mem
            free(temp);
            // return head;
        }
        else
        {
            // To check whether element is found or not
            int check = 0;
            while (temp->next != NULL)
            {
                if (temp->next->data == num)
                {
                    node2del = temp->next;
                    temp->next = temp->next->next;
                  //malloc heap mem
                    free(node2del);
                    check = 1;
                    return head;
                }
             //if case failed travel aage
             //skskskskskksks
                temp = temp->next;
            }
         
            if (check == 0)
            {
                printf("Element not found\n");
                // return head;
            }
        }
    }
    return head;
}
// display fn takes in head
void display(struct node *head)
{
    struct node *temp;
    temp = head;
  //temp which is storing head is empty, list is empty
    if (temp == NULL)
    {
        printf("EMPTY LL\n");

    }
    // sins head is not pointing to null it will go to else block
    else
    {
    // this loop will keep checking till temp is null ie list not over
    while (temp!= NULL)
    {
        printf("%d->", temp->data);
      // update temp to next node
        temp = temp->next;
      // last node's next will be null 
    }
    printf("NULL\n");
  }
}
void main()
{
    int num, choice = 0;
    struct node *head;
    head = NULL;

    while (choice != 4)
    {
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data for the node: ");
            scanf("%d", &num);
            head = insert(head, num);
            break;
        case 2:
            printf("Enter the data to be deleted: ");
            scanf("%d", &num);
            head = del(head, num);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Bad Input");
        }
    }
}
