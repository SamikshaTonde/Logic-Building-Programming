/*write a program which accept string from user and accept one
character. return index of Last occurance of that character
IP:  "Marvellous"
      M
OP:   9
IP:  "Marvellous"
      W
OP:   -1
 
*/

#include<stdio.h>

int lastOcc(char *str,char ch)
{
    int iIndex=0;
    int iPos=-1;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iPos=iIndex ;
        }
        iIndex++;
        str++;
    }
    return iPos;
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

    iRet=lastOcc(arr,cValue);

    printf("Character frequency is %d",iRet);
   
    return 0;
}
