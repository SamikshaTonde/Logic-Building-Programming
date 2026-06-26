// Accept ammount in us dollar and return its corresponding value in indian currencyconsider 1$ as 70
//IP:10
//OP:700
#include<stdio.h>
int  DollarToINR(int iNo)
{
    int iCnt=0;
    int USDDollar=70;

    iCnt=iNo*70;

    return iCnt;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number of USD");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("Value in INR is %d",iRet);


    return 0;
}