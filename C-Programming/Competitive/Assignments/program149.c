/*
Accept character from user and check whether it is special symboly
or not(! @ # $ % ^ & * ).
IP:%
OP:True
IP:d
OP:false

 */
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckSpecial(char ch)
{
    if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*')
    {
        return TRUE;
    }

    return FALSE;

}
int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("Enetr the character");
    scanf("%c",&cValue);

    bRet=CheckSpecial(cValue);

    if (bRet==TRUE)
    {
        printf("TRUE == special character");

    }
    else
    {
        printf("FALSE==not Special charcter");

    }
    return 0;
}