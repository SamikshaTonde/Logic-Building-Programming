//Accept n Number from user and accept one another number as No,return index of first occurance of that NO

//IP:N:6
//   NO:66
//elements: 85 66 3 66 93 88
//OP:1
#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCnt;
        }

    }
    return -1 ;

}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iValue=0;
    int *p=NULL;
    int iRet=0;

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
    iRet=FirstOcc(p,iSize,iValue);
    if(iRet==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("first occurance of number is%d",iRet);
    }
    
    free(p);
    return 0;

}
