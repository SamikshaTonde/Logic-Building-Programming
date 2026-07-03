/*
write a program which accept string from user and check whether 
it contains vowels in it or not 
IP:  "Marvellous"
OP:   TRUE
IP:  "Demo"
OP:   TRUE
IP:   "xyz"
OP:   FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int CheckVowel(char *str)
{
    while(*str!='\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
           *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
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
    BOOL bRet=FALSE;

    printf("Enter String");
    scanf("%[^\n]s",arr);

    bRet=CheckVowel(arr);

    if(bRet==TRUE)
    {
        printf("contains Vowel");
    }
    else
    {
        printf("there is no Vowel");
    }

    return 0;
}