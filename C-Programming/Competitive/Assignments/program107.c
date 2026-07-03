//Accept number fom user and Display below pattern
//IP: 5
//OP: 5 # 4 # 3 # 2 # 1 #
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        printf("%d\t",iCnt);
        printf("#\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number of elements\n:");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}