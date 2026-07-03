/*
write a program which dispalay ASCII table.Table contains 
Symbol,decimal,hexadecimal and octal representation of
 every member from 0 to 255
 */
#include<stdio.h>
void Display()
{
    int i=0;
    printf("Syambol\tDecimal\tHexaDecimal\tOctal\n");

    for(i=0;i<=255;i++)
    {
        printf("%c\t%d\t%X\t%o\n",i,i,i,i);
    }
}
int main()
{
    Display();
    return 0;
}