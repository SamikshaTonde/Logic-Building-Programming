/*
Accept character from user if character is small display its 
coressponding capital character, and if it small then Display its
cooeresponding capital.in other cases display asit is
IP:Q
OP:q
IP:m
OP:M
IP:4
OP:4
IP:%
OP:%
 */
#include<stdio.h>
void Display(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        ch=ch+32;
        printf("%c\n",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
    }
    
}
int main()
{
    char cValue='\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}