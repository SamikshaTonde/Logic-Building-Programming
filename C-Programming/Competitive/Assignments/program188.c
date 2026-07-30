/*
3. Write a program which accept one number from user and Check 
whether 9th or 12th bit is on or off
IP: 257
OP: TRUE
*/
#include<stdio.h>
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkBit(UINT iNo)
{
    UINT iMask=1;
   
    iMask=(1<<8)|(1<<11);
    if((iNo&iMask)!=0)
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

    printf("Enetr the number:\n");
    scanf("%u",&iValue);

    bRet=ChkBit(iValue);

    if(bRet==TRUE)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("9th or 12th bit is OFF\n");
    }


    return 0;
}