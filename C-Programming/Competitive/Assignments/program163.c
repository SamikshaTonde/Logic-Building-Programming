/*write a program which accept string from user and accept one
character. return index of first occurance of that character
IP:  "Marvellous"
      M
OP:   0
IP:  "Marvellous"
      W
OP:   -1
 
*/

#include<stdio.h>

int FirstOcc(char *str,char ch)
{
    int iIndex=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            return iIndex ;
        }
        iIndex++;
        str++;
    }
    return -1;
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

    iRet=FirstOcc(arr,cValue);

    printf("Character frequency is %d",iRet);
   
    return 0;
}
