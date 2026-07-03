//Accept character from user and check wether it is Digit or not
/*
 IP:   8
 OP:   TRUE
 IP:   &
 OP:   FALSE

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckCapital(char ch)
{
    if(ch>='0'&&ch<='9')
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

    bRet=CheckCapital(cValue);

    if (bRet==TRUE)
    {
        printf("it is digit");

    }
    else
    {
        printf("it is not digit");

    }
    return 0;
}