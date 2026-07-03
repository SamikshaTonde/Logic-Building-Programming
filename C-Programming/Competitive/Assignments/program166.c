/*write a program which accept string from user and ccopy the
content of that string into another string(Implement strcpy()function)
IP:  "Marvellous Multi OS"
OP:  "Marvellous Multi OS"   in another string
*/
#include<stdio.h>
#include<string.h>
void StrCpyX(char *str,char *dest)
{
    while(*str!='\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest='\0';
}
int main()
{
    char arr[30]="Marvellous Multi OS";
    char brr[30];     //empty string

    StrCpyX(arr,brr);

    printf("%s",brr);   //Marvellous Multi OS

    return 0;
}