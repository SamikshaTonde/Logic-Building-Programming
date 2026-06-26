//write a program which accept number from user and display its table
//ip:2
//op:2 4 6 8 10 12 14 16 18 20
#include<stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    int iTable=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d ",iCnt*iNo);
  
    }  
}
int main()
{
    int iValue=0;
  

    printf("enter number");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}