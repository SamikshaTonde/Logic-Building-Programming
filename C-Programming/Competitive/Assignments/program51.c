//Write a program which Accept range fom user and Display all numbers in between that Range 
//IP:23  35
//OP:23 24 25 26 27 28 29 30 31 32 33 34 35 
#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart > iEnd)
    {
    printf("Invalid Range");
    return;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d ",iCnt);

    }
    
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}