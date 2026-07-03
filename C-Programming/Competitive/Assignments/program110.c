//Accept Number fom user and display below pattern
//IP:8
//OP:2 4 6 8 10 12 14 16
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        
       printf("%d\t",2*iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enetr the number:\n");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}
