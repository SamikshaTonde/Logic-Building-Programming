//Write a program which Accept range fom user and  return Addition of all  numbers in between that Range 
//IP:23  30
//OP:212 
#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart > iEnd)
    {
    printf("Invalid Range");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d ",iCnt);
        iSum=iSum+iCnt;
        
    }
    
    return iSum;
    
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    printf("Addition is%d\n",iRet);

    return 0;
}