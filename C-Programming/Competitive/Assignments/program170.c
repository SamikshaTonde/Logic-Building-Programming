/*write a program which accept 2 string from user and 
concat second string after first string (impleent strcat()function)
IP:  "Marvellous Infosystem"
      "Logic Building"
OP:  "Marvellous Infosystem Logic Building"
*/
#include<stdio.h>
#include<string.h>
void StrCpyX(char *str,char *dest)
{
    while(*str!='\0')
    {
        *str++;

    }
    while(*dest!='\0')
    {
        *str=*dest;
        str++;
        dest++;
        
    }
    *str='\0';
}
int main()
{
    char arr[30]="Marvellous Multi OS";
    char brr[30]="Logic Building";

    StrCpySmall(arr,brr);

    printf("%s",brr);   //Marvellous Multi OS

    return 0;
}