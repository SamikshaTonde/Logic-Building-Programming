//write a program which accept string from user and count number of white spaces
/* IP:  "Marvello  us1234"
   OP:   2
*/
#include<stdio.h>
int CountWhiteSpace(char *str)
{
    int Count=0;
    while(*str!='\0')
    {
        if(*str==' ')
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
    int iRet=0;

    printf("Enetr String:\n");
    scanf("%[^\n]s",arr);
    
    iRet=CountWhiteSpace(arr);

    printf("Space are%d:\n",iRet);
    
    return 0;
}