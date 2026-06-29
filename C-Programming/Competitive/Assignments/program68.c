//Accept N Number from user and check Whether taht number contains 11in it or not
//IP:N:6
//  elements:85 66 11 80 93 88
//OP: 11 is present
//IP:N:6
//  elements:85 66 3 80 93 88
//OP: 11 is not present
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
          return TRUE;
        }
    }
    return FALSE;
    
}

int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate Memerory");
        return -1;
    }
    printf("Enter%d the elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enetr element is%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iSize);
    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);


    return 0;
}