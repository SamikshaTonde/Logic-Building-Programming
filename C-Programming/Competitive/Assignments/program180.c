/*
write a program which accept one number from user and on its first 4 bits. return modified number
IP:73
OP:79
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask= 0x0F;     //4 bit

    return (iNo | iMask);

}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter the number :");
    scanf("%u",&iValue);

    iRet=OnBit(iValue);

    printf("Modified number is : %u\n",iRet);

    return 0;

}