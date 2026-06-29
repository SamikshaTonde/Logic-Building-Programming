//write a program which accept number from user and count frequency of such a digits whic are less than 6
//IP:2395
//OP:3
//IP:1018
//OP:3
#include<stdio.h>
int CountTwo(int iNo,int iSearch)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<iSearch)
        {
           iCount++; 
        }
        iNo=iNo/10;

    }
return iCount;
}
int main()
{
    int iValue=0;
    int iDigit=0;
    int iRet=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue);

    printf("Enter digit to search : ");
    scanf("%d",&iDigit);

    iRet=Count(iValue,iDigit);
    printf("frequency is %d",iRet);

    return 0;
}