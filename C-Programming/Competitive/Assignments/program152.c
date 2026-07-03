/*
write a program which accept string from user and count number of Small characters
IP: "Marvellous Multi OS"
OP: 13
*/
#include<stdio.h>
int CountCapital(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCount++;
        }
        str++;
        
    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String");
    scanf("%[^\n]s",arr);

    iRet=CountCapital(arr);

    printf("%d",iRet);

    return 0;
}