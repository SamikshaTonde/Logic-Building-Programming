//write a program which check whether 5 th and 18 bit is ON or OFF
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask=0x00020010;

    UINT iResult=0;

    iResult=iNo&iMask;

    if(iResult==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
    
}
int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;

    printf("Enetr number:\n");
    scanf("%u",&iValue);

    bRet=CheckBit(iValue);

    if(bRet==TRUE)
    {
        printf("5th and 18th bit is ON\n");
    }
    else
    {
        printf("5th and 18th bit is OFF\n");
    }
return 0;
}
