#include<stdio.h>
#include<stdlib.h>
struct node
{
int  data;
struct node *next;
struct node *prev;

};
struct node *head=NULL;
void display()
{

    struct node*hpptr;
    hpptr=head;
    while(hpptr!=NULL)
    {
        printf("%d \n",hpptr->data);
        hpptr=hpptr->next;
    }
    return;
}

void insert(int x)
{
    struct node*hpptr;
    struct node *pnew;
     struct node *prev;
    pnew=(struct node*) malloc(sizeof(struct node));
    pnew->data=x;
    pnew->next=NULL;
    pnew->prev=NULL;
    if(head==NULL)
    {

        head=pnew;
        return;
    }
    if(head->data>x)
    {

        pnew->next=head;
        head->prev=pnew;
        head=pnew;
        return;
    }
    hpptr=head;
    while(hpptr->next!=NULL && hpptr->next->data<x)
        hpptr=hpptr->next;
        pnew->next=hpptr->next;
        if(hpptr->next!=NULL)
        hpptr->next->prev=pnew;
      
        hpptr->next=pnew;
          pnew->prev=hpptr;
        return;

}

void delete1(int x)
{
    struct node*hpptr;
    struct node *temp;
    if(head==NULL)
    {
      printf("List is empty \n");  
      return;
    }
    if(head->data==x)
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        return;
    }
    hpptr=head;
    while(hpptr->next!=NULL && hpptr->next->data!=x)
    hpptr=hpptr->next;
    if(hpptr->next==NULL)
    {
        printf("\nElement not found");
        return;
    }
    
    temp=hpptr->next;
    hpptr->next=temp->next;
    temp->next->prev=hpptr;
    free(temp);
    return;
    
}
int main()
{

    printf("HELLO linked list\n");

    insert(10);
    insert(30);
    insert(40);
   insert(50);
    display();

//delete(10);
//display();
 insert(5);
  insert(100);
   insert(25);
    insert(50);
    display();
    
    delete1(5);
    display();


    return 0;
}