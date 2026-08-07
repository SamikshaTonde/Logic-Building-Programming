/*
Consider singly Linear Linkedlist to solve below poblem ststement
assignment 35

1.eturn position of the first occurance

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

int FirstOccurrencePosition(PNODE first,int iNo)
{
    int iPos=1;
    while(first!=NULL)
    {
        if(first->data==iNo)
        {
            return iPos;
        }
        iPos++;
        first=first->next;
    }

    return -1;
}

int main()
{
    PNODE head=NULL;

    int iValue=0;
    int iRet=0;
    

    InsertFirst(&head,50);
    InsertFirst(&head,33);
    InsertFirst(&head,33);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iRet=FirstOccurrencePosition(head,iValue);

    if(iRet==-1)
    {
        printf("Element is not present\n");
    }
    else
    {
        printf("first occurance position is :%d\n",iRet);
    }


    return 0;
}