//Write a program to find factorial of the given number
//ip:5
//op:120(5*4*3*2*1)#include<stdio.h>
#include<stdio.h>
unsigned long Factorial(int iNo)
{
    int iCnt=0;
    unsigned long factorial=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        factorial=factorial*iCnt;

    }

    return factorial;

    
}
int main()
{
    int iValue=0;
    unsigned long iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of the number is %d",iRet);

    return 0;
}