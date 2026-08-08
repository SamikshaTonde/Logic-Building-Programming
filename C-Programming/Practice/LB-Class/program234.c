#include<stdio.h>
#include<string.h>            
int main()

{
    char str[]="Jay Ganesh";               //op: 10 karan strln \0 count karat nahi
    int iRet=0;

    iRet=strlen(str);        //inbuilt function

    printf("Length of String is :%d\n",iRet);     // str parameter

    return 0;
}