/*
3. Write a program which accept one number from user and Check 
whether bit at first and bit at 2nd  position is on or off
IP: 10 3 7
OP: true
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef  int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo)
{
    int Mask=3;
   
    int Result=0;
    Result=(iNo&Mask);
    if(Result==Mask)
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
    BOOL bRet=0;

    printf("Enter the input:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    if(bRet==TRUE)
    {
        printf("bit is on\n");
    }
    else
    {
        printf("Bit is off\n");
    }
    return 0;
}