//write a program which check whether  7th and 15 bit and 21 and 28 bit is ON or OFF
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask=0x08104040;  //7t,15,21,28 bit

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
        printf("7th,15th,21,28th bit is ON\n");
    }
    else
    {
        printf("7th,15th,21,28th bit is OFF\n");
    }
return 0;
}
