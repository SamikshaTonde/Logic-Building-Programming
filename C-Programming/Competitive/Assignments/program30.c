//write a program which accept number from user and display its table in reverse fom
//ip:2
//op:20 18 16 14 12 10 8 6 4 2 
#include<stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    int iTable=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d ",iCnt*iNo);
  
    }  
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}