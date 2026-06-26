//wite a program which accept number from user and print all odd numbers up to N
//IP:18
//op: 1 3 5 7 9 11 13 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
        printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
