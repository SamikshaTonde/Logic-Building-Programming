/*
Accept character from user and display its ASCII value in decimal ,octal and hexadecimal format
IP: A
OP:Decimal 65
OP:octal  0101
OP:hexaDecimal 0X41

 */
#include<stdio.h>
void Display(char ch)
{
    printf("Decimal:%d\n",ch);
    printf("octal:%o\n",ch);
    printf("HexaDecimal:%X\n",ch);
}
int main()
{
    char cValue='\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}