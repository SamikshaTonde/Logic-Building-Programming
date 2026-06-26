//write a program which accept number fom user and isplay below pattern
//IP:5
//OP:* * * * * # # # # # 
#include<stdio.h>
void  Display(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    
    } 
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
    
    }  

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}