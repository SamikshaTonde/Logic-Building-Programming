/*
complete below code snipeets it contains only service povider function
wite entry point  function to call below hepler function separetly 
1. Write a program which accept one number from user and count number of ON(1) bits int it 
without using % and / operator 
IP:11
OP:3
*/
#include<stdio.h>
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
    int iCount=0;
    UINT iMask=1;
    while(iNo!=0)
    {
        if(iNo&iMask)
        {
            iCount++;
        }
        iNo=iNo>>1;
    }
    return iCount;

}
int main()
{
    UINT iValue=0;
    int  iRet=0;

    printf("Enetr the number:\n");
    scanf("%u",iValue);

    iRet=CountOne(iValue);

    printf("Number of ON bits are:%u\n",iRet);

    return 0;
}