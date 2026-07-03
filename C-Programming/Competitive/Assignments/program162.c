/*write a program which accept string from user and accept one
character. return frequency of that character
IP:  "Marvellous"
      w
OP:   0
IP:  "Marvellous"
      ll
OP:   2
 
*/

#include<stdio.h>

int FreqChar(char *str,char ch)
{
    int Count=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
           Count++; 
        }
        str++;
    }
    return Count;
}
int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet=0;

    printf("Enetr the String:\n");
    scanf("%[^\n]",arr);

    printf("enetr the character:\n");
    scanf(" %c",&cValue);    

    iRet=FreqChar(arr,cValue);

    printf("Character frequency is %d",iRet);
   
    return 0;
}
