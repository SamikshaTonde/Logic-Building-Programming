/*
write a program which accept one number from user and toggle
7th bit of that number . return modified number
IP:137
OP:201
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask= 0x40;     //7 bit

    return (iNo ^ iMask);

}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter the number :");
    scanf("%u",&iValue);

    iRet=ToggleBit(iValue);

    printf("Modified number is : %u\n",iRet);

    return 0;

}