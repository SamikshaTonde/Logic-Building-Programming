/*
1.Write a program which accept one number and position from user
and Toggle that bit .return modified number
IP: 10  3
OP: 14
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,int iPos)
{
    UINT iMask=1;
    iMask=iMask<<(iPos-1);

    return (iNo^iMask);
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

    iRet=ToggleBit(iValue,iPos);
    printf("Modified number is :%u\n",iRet);

    return 0;
}