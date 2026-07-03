//Accept Number fom user and display below pattern
//IP:5
//OP:# 1 * # 2 * # 3 * # 4 * # 5 * 
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
        printf("%d\t",iCnt);
        printf("*\t");
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
