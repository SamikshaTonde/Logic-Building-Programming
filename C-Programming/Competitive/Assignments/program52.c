//Write a program which Accept range fom user and Display all even numbers in between that Range 
//IP:23  35
//OP: 24  26  28  30  32  34 
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
        if(iCnt%2==0)
        {
            printf("%d ",iCnt);


        }
        
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