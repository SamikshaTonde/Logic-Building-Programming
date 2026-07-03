//write a program which accept string from user and display only digits from the string
/* IP:  "Marvellous1234"
   OP:   1234
*/
#include<stdio.h>
void strlprx(char *str)
{
    while(*str!='\0')
    {
        if((*str>='0')&&(*str<='9'))
        {
           printf("%c",*str);
        }
        
        str++;

    }
    

}
int main()
{
    char arr[20];

    printf("Enetr String:\n");
    scanf("%[^\n]s",arr);

    printf("digits are:\n");

    strlprx(arr);
    
    return 0;
}