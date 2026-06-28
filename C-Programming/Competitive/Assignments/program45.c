//write a program which Accept number from user and return difference betwwn summation of even digits and summation of odd digits .
//IP:2395
//OP:-15(2-17)
#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit=0;
    int iMul=1;
    int iSumEven=0;
    int iSumOdd=0;
    int Differnece=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iSumEven=iSumEven+iDigit;
           
        }
    
        else if(iDigit%2!=0)
        {
            iSumOdd=iSumOdd+iDigit;
        }
        iNo=iNo/10;
       
        Differnece=iSumEven-iSumOdd;
        

    }
    
    
    return Differnece; 
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}