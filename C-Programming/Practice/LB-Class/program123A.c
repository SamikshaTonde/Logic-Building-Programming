#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{

    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }

    return iSum;

}
int main()
{
    int *Brr = NULL;         //ceate pointer
    int iLength=0, iCnt=0,iRet=0;             //use value ghychi    

    printf("enter the number of elements:");
    scanf("%d",&iLength);              //user lkadun size ghetali

    Brr=(int *)malloc(sizeof( int)*iLength);
    printf("enter the number of elements:");

    for(iCnt=0; iCnt<=iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]); 

    }

    iRet=Summation(Brr,iLength);
    printf("Summation is :%d\n",iRet);
    free(Brr);


    return 0;

}