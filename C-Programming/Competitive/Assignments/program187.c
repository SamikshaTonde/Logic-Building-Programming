/*
2. Write a program which accept one number from user and display 
positio of common ON bits from that two numbers
IP: 10    15      (1010    1111)
OP: 2     4
*/
#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iResult=0;
    UINT iMask=1;
    int iPos=1;

    iResult = iNo1 & iNo2 ;
    while(iResult!=0)
    {
        if((iResult&iMask)==iMask)
        {
           printf("%d\t",iPos); 
        }
        iResult=iResult>>1;
        iPos++;
    }

}
int main()
{
    
    UINT iValue1=0;
    UINT iValue2=0;
    int  iRet=0;

    printf("Enetr the number:\n");
    scanf("%u",&iValue1);

    printf("Enetr the number:\n");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}