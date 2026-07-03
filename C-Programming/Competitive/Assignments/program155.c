/*
write a program which accept string from user and display it in 
reverse order
IP:  "Marvellous"
OP:  "SuollevraM"
*/
#include<stdio.h>

void Reverse(char *str)
{
    
    char *start = str;

    while(*str!='\0')
    {
        str++;    
    }
    str--;
    while(str>=start)
    {
        printf("%c",*str);
        str--;
    }
    
    return ;
}
int main()
{
    char arr[20];
    

    printf("Enter String");
    scanf("%[^\n]s",arr);

    Reverse(arr);

   

    return 0;
}