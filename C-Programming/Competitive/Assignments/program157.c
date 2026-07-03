//write a program which accept string from user and convert it into Upper case
/* IP:  marvellous multi os
      
    OP:  MARVELLOUS MULTI OS 
*/
#include<stdio.h>
void strlprx(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
           *str=*str-32;
        }

        str++;

    }
    

}
int main()
{
    char arr[20];

    printf("Enetr String:\n");
    scanf("%[^\n]s",arr);

    strlprx(arr);

    printf("Modified String is %s",arr);

    return 0;
}