/*
Consider singly Linear Linkedlist to solve below poblem ststement
assignment 35

1.Count nodes containg even value

*/
#include<stdio.h>
#include<stdlib.h>

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

int CountEvenNumbers(PNODE first)
{
    int iCount=0;
    while(first!=NULL)
    {
        if((first->data % 2)==0)
        {
            iCount++;
        }
        first=first->next;
    }

    return iCount;
}

int main()
{
    PNODE head=NULL;

    int iValue=0;
    int iRet=0;
    

    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,33);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    
    iRet=CountEvenNumbers(head);

    printf("Number of even nodes are:%d\n",iRet);

    return 0;
}