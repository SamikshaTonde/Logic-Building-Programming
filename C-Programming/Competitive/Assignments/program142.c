//Accept character from user and check wether it is Capital or not(A-Z)
/*
 IP:   F
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
    if(ch>='A'&&ch<='Z')
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
        printf("it is capital character");

    }
    else
    {
        printf("it is not capital character");

    }
    return 0;
}