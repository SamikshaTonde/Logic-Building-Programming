/*write a program which accept string from user reverse that string in place
IP:  "abcd"
OP:   "dcba"
IP:  "abba"
OP:   "abba"
 
*/

#include<stdio.h>
#include<string.h>

int ReverseDisplay(char *str)
{
    int iLength=strlen(str);
    int i=0;
    for(i=iLength-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}
int main()
{
    char arr[20];
    
    printf("Enetr the String:\n");
    scanf("%[^\n]",arr);
    
    ReverseDisplay(arr);
    return 0;
}
