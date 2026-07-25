/*write entry point function to call below helper functoion separeltely
write a progam which accept one number fom user and off 7 th bit and 10 th bit
of that number if it is on return modified number
IP:577
OP:1

*/
#include<stdio.h>

typedef unsigned int UINT;

UINT offBit(UINT iNo)
{
    UINT iMask= 0xFFFFFDBF; //0110111111

    return (iNo & iMask);

}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter the number :");
    scanf("%u",&iValue);

    iRet=offBit(iValue);

    printf("Modified number is : %u\n",iRet);

    return 0;

}