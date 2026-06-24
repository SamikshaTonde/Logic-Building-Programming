//Accept no if no less than 10 then pint "hello"otherwise print""Demo"
#include<stdio.h>
void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");

    }
    else
    {
        printf("Demo");

    }
}
int main()
{
    int iValue=0;
    printf("Enetr the number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}