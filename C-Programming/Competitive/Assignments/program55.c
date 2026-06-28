//Write a program which Accept range fom user and  return Addition of all  numbers in between that Range in reverse order 
//IP:23  30
//OP:212 
#include<stdio.h>
void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart > iEnd)
    {
    printf("Invalid Range");
    }
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
       printf("%d ",iCnt) ;   
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;
    

    printf("Enter Starting Point");
    scanf("%d",&iValue1);

    printf("Enter Ending Point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
  

    return 0;
}