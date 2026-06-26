//write a program to find difference betwwen even and odd factorial of given number
//IP:5
//OP:-7(8-15)
#include<stdio.h>
int FactorialDiff (int iNo)
{
    int iCnt=0; 
    int iFactorialEven=1;
    int iFactorialOdd=1;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iFactorialEven=iFactorialEven*iCnt;
        }
        else if(iCnt%2!=0)
        {
            iFactorialOdd=iFactorialOdd*iCnt;

        }

        iCount=iFactorialEven-iFactorialOdd;
    }

    return iCount;
   

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Difference Factorial of number  is %d",iRet);


    return 0;
}