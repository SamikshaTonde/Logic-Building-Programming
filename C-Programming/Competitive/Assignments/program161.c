/*write a program which accept string from user and accept one
character .check whether that character is present in string or not
IP:  "Marvellou"
      e
OP:   TRUE
IP:  "Marvellou"
      w
OP:   FALSE
 
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckChar(char *str,char ch)
{
    while(*str!='\0')
    {
        if(*str==ch)
        {
           return TRUE; 
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet=FALSE;

    printf("Enetr the String:\n");
    scanf("%[^\n]",arr);

    printf("enetr the character:\n");
    scanf(" %c",&cValue);     //space buffer new line

    bRet=CheckChar(arr,cValue);
    if(bRet==TRUE)
    {
        printf("Character found ");
    }
    else
    {
        printf("Charcter not Found");
    }
    return 0;
}
