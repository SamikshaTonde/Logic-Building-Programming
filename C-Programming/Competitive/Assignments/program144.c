//Accept character from user and check wether it is small or not
/*
 IP:   g
 OP:   TRUE
 IP:   D
 OP:   FALSE

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckSmall(char ch)
{
    if(ch>='a'&&ch<='z')
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

    bRet=CheckSmall(cValue);

    if (bRet==TRUE)
    {
        printf("it is small");

    }
    else
    {
        printf("it is not Small");

    }
    return 0;
}