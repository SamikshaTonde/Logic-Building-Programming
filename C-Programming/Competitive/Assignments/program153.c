/*
write a program which accept string from user and return differnce
between frequency of small characters and frequency of capital 
characater
IP:  "Marvellous"
OP:   6(8-2)
*/
#include<stdio.h>
int CountCapital(char *str)
{
    int iCountSmall=0;
    int iCountCapital=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCountCapital++;
        }
        else if((*str>='a')&&(*str<='z'))
        {
            iCountSmall++;
        }
        str++;
           
    }
    return (iCountCapital-iCountSmall);
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String");
    scanf("%[^\n]s",arr);

    iRet=CountCapital(arr);

    printf("Difference is :%d",iRet);

    return 0;
}