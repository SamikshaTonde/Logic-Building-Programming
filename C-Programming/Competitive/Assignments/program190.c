/*
Write a program which accept one number from use and range of position from user .
toggle all bits from that range.
IP: 897
toggle all bits from position 9 to 13 of input number is 879

*/
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRanges(UINT iNo , int iStart , int iEnd)
{
   UINT iMask=0;
   int iPos=0;
   UINT Result=0;

   for(iPos=iStart;iPos<=iEnd;iPos++)
   {
        iMask=iMask | 1<<(iPos-1);
   }
   Result=iNo ^ iMask;

   return Result;
}
int main()
{
    UINT iValue=0;
    int iPosition1=0;
    int iPosition2=0;
    UINT iRet=0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printf("Enter the position:\n");
    scanf("%d",&iPosition1);

    printf("Enter the position:\n");
    scanf("%d",&iPosition2);

    iRet=ToggleBitRanges(iValue,iPosition1,iPosition2);

    printf("toggle bit ranges are:%d\n",iRet);

    return 0;
}
