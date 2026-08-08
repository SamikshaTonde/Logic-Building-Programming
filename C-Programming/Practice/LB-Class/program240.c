#include<stdio.h>
          
int main()
{
    char Arr[50]={'\0'};             //rekama array==>49 byte only store 1 byte \0

    printf("Enter String :\n");
    scanf("%s",Arr);                 //issue Scanf accept till space
    
    printf("entered String is :%s\n",Arr);
    return 0;
}