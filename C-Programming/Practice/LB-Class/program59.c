//Input : 5
// Output: 5 4 3 2 1 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo; iCnt>=iNo; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue=0;
    printf("enter number:\n");
    scanf("%d\n",&iValue);
    
    Display(iValue);



    return 0;
}