/*
1.Write a program which accept one number and position from user
and Toggle contents of first and last nibble of the numder .return modified number
(Nibble is a group of four bits)

*/
#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    UINT iMask=0;
   
    iMask=0xF000000F;
    
    return (iNo^iMask);
}
int main()
{
    UINT iValue=0;
    int iPos=0;
    UINT iRet=0;

    printf("Enetr the number:\n");
    scanf("%u",&iValue);

    iRet=ToggleBit(iValue);
    printf("Modified number is :%u\n",iRet);

    return 0;
}