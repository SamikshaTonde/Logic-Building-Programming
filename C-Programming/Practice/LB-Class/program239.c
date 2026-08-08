#include<stdio.h>
#include<string.h>           
int main()
{
    char *str="Ganesh"; 
    int iCount=0;

    printf("Length of string is :%lu\n",strlen(str));                        //whle chya vr kelyannatr to 6 detoy

    while(*str!='\0')
    {

       iCount++;                  
       str++;

    }  
    printf("Length of string is :%d\n",iCount); 
    //printf("Length of string is :%lu\n",strlen(str));                         //str ++ karat to \0 la pohchto
  
    return 0;
}