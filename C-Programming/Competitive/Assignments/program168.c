/*write a program which accept string from user and ccopy the
content of that string into another string(Implement strcpy()function)
IP:  "Marvellous Multi OS"
OP:   MMOS
*/
#include<stdio.h>
#include<string.h>
void StrCpyX(char *str,char *dest,int iCnt)
{
    while(*str!='\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
           
            dest++;

        }
         str++;  
    }
    *dest='\0';
}
int main()
{
    char arr[30]="Marvellous Multi OS";
    char brr[30];     //empty string

    StrCpyX(arr,brr,10);

    printf("%s",brr);   //Marvellous Multi OS

    return 0;
}