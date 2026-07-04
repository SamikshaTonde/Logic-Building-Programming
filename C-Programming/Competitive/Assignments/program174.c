//write a program which check whether  7th and 8 bit and 9bit is ON or OFF
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask=0x000001C0;

    UINT iResult=0;

    iResult=iNo&iMask;

    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
        printf("7th,8th,9 bit is ON\n");
    }
    else
    {
        printf("7th,8th,9th bit is OFF\n");
    }
return 0;
}
