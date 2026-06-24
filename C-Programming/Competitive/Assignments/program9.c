//accept 1 no from user and display first no in Second no of tImes
// ip=. 12 5
//op=>  12 12 12 12 12
#include<stdio.h>
void Display(int iNo , int iFrequency)
{
    int iCnt=0;
    //write updater
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d""\t",iNo);
    }
    
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number ");
    scanf("%d",&iValue);

    printf("Enter Frequency ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}