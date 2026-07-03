/*write a program which accept string from user and 
copy the small characters of that string into another string
IP:  "Marvellous Multi OS"
OP:   arvellous multi
*/
#include<stdio.h>
#include<string.h>
void StrCpySmall(char *str,char *dest,int iCnt)
{
    while(*str!='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    StrCpySmall(arr,brr,10);

    printf("%s",brr);   //Marvellous Multi OS

    return 0;
}