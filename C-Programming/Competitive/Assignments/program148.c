/*
Accept character from user if character is capital display its 
character from the ip chracter till Z, and if IP character small then print 
all the character in reverse oeder till a. in order cases return directly
IP:q
OP:q r s t u v w x y z
IP:8
OP:

 */
#include<stdio.h>
void Display(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        for(ch=ch;ch<='Z';ch++)
        {
           printf("%c",ch);
        }
        
    }
    else if(ch>='a'&&ch<='z')
    {
       for(ch=ch;ch>='a';ch--)
        {
           printf("%c",ch);
        }
        
    }
    else
    {
        return ;
    }
    
}
int main()
{
    char cValue='\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}