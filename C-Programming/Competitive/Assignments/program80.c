//Accept n Number fom user and display summation of digits of each numbers
//IP:  N:6
//elemnets:1 2 3 4 5
//OP:15

#include<stdio.h>
#include<stdlib.h>


void DigitsSum(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+Arr[iCnt];   
    }
    printf("Sum is%d",iSum);
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    int iRet=0;  

    printf("Enter the number of elemnets");
    scanf("%d",&iSize);

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
    DigitsSum(p,iSize);

    
    free(p);
    return 0;

}
