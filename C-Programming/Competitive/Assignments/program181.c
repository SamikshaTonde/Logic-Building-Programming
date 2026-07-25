/*
complete below code sippets it contains only services provider function
write entry point funtion to call below helper functions separately

1.Write a program which accept one number and position from user
and check wheter bit at that position is on or off .
if bit one return TRUE otherwise return False
IP: 10
OP: TRUE
*/
#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo,int iPos)
{
    UINT iMask=1;
    iMask=iMask<<(iPos-1);
    if((iNo&iMask)==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main ()
{
    UINT iValue=0;
    int iPosition=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%u",&iValue);

    printf("Enter Position");
    scanf("%d",&iPosition);

    bRet=ChkBit(iValue,iPosition);

    if(bRet==TRUE)
    {
        printf("bit is ON\n:");
    }
    else
    {
        printf("bit is OFF\n");
    }
    return 0;
}