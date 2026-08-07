/*
Consider singly Linear Linkedlist to solve below poblem ststement
assignment 35

1.Search an element=>check whether a number is present

*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
   int data;
   struct node *next; 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE first,int iNo)
{

    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if(*first==NULL)
    {
        *first=newn;
    }
    else
    {
        newn->next=*first;
        *first=newn;
    }
}
void Display(PNODE first)
{
    while(first!=NULL)
    {
        printf("| %d |-> ",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

BOOL Search(PNODE first , int iNo)
{
    while(first!=NULL)
    {

        if(first->data==iNo)
        {
            return TRUE;
        }
        first = first ->next;
        
    }
    return FALSE;
}

int main()
{
    PNODE head=NULL;

    int iValue=0;
    BOOL bRet=FALSE;

    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    printf("Enter the elemnet is:\n");
    scanf("%d",&iValue);

    bRet=Search(head,iValue);

    if(bRet==TRUE)
    {
        printf("Element is present in the linked list\n");
    }
    else
    {
        printf("Element is not present in the linked list\n");
    }

    return 0;
}