//write a program which accept string from user and TOGGLE the  case
/* IP:  "Marvellous"
   OP:   mARVELLOUS
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
        else if((*str>='A')&&(*str<='Z'))
        {
           *str=*str+32;
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