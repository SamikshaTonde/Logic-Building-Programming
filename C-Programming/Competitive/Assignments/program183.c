/*
1.Write a program which accept one number and position from user
and ON that bit .return modified number
IP: 10  3
OP: 14
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OnBit(UINT iNo,int iPos)
{
    UINT iMask=1;
    iMask=iMask<<(iPos-1);

    return (iNo|iMask);
}
int main()
{
    UINT iValue=0;
    int iPos=0;
    UINT iRet=0;

    printf("Enetr the number:\n");
    scanf("%u",&iValue);

    printf("Enter the position:\n");
    scanf("%d",&iPos);

    iRet=OnBit(iValue,iPos);
    printf("Modified number is :%u\n",iRet);

    return 0;
}