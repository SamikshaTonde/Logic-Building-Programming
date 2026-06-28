//write a pogram which accept number from user and return the multiplication of all digits 
//IP:2395
//OP:270
#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit=0;
    int iMul=1;
    int iCount=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iMul=iMul*iDigit;
        iCount++;
        iNo=iNo/10;
    }
    
    
    return iMul; 
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("%d",iRet);

    return 0;
}