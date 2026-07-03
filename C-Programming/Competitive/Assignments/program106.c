//IP:5
//OP:A B C D E
#include<stdio.h>
void Pattern(int iNo)
{
    char ch='A';
    for(ch='A';ch<='E';ch++)
    {
        printf("%c\t",ch);
    }

}
int main()
{
    int iValue=0;
    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern (iValue);
    return 0;
}