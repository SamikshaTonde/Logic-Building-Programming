//write a program whic accept numabr from user and chck whether it contains 0 in it or not
//IP:2395
//there is no  zero
//IP:1018
//OP:it Contains zero
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo=iNo/10;
    }
    return FALSE;
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("enter number");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if (bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("there is no zero");
    }
    return 0;
}