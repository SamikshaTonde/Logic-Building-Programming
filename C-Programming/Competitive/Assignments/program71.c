//Accept n Number from user and accept one another number as No,Check whether No is persent or nOt
//IP:N:6
//   NO:66
//elements: 85 66 3 66 93 88
//OP: TRUE
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check (int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
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
    int iValue=0;
    int *p=NULL;
    BOOL bRet=FALSE;
    printf("Enter the number of elemnets");
    scanf("%d",&iSize);

    printf("Enetr the number ");
    scanf("%d",&iValue);


    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }
    printf("Enter%d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter elements%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iSize,iValue);
    if(bRet==TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    
    free(p);
    return 0;

}
