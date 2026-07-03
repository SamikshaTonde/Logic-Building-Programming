//Accept character from user and check wether it is alphabet or not(A-Z a-z)
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
BOOL CheckAlpha(char ch)
{
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
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

    bRet=CheckAlpha(cValue);

    if (bRet==TRUE)
    {
        printf("it is character");

    }
    else
    {
        printf("it is not character");

    }
    return 0;
}