//write  aprogram which accept number from user and ount frequency of 4 in it 
//IP:2395
//OP:0
//IP:9440
//OP:2
#include<stdio.h>
int CountFour(int iNo,int iSearch)
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
        if(iDigit==iSearch)
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

    iRet=CountFour(iValue,iDigit);
    printf("frequency is %d",iRet);

    return 0;
}