
/*
Accept division of student fro usee and depends on the division display
exam timing .there are 4 division in school as A,B,C,D. exam of division Aat 7 AM,
B at 8:30 am, c at 9:20 am, and D at 10:30 AM (pplication should be case insensitive)
 IP:   c
 OP:   Your Exam at 9:30 Am
 IP:   d
 OP:   Your Exam at 10:30 Am
*/
#include<stdio.h>

int main()
{
    char ch='\0';

    printf("Enter the division");
    scanf("%c",&ch);

    if(ch=='A'||ch=='a')
    {
        printf("Your exam is at 7:00 AM \n");
    }
    else if(ch=='B'||ch=='b')
    {
        printf("Your exam is at 8:30 AM \n");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("Your exam is at 9:30 AM \n");
    }
    else if(ch=='D'||ch=='d')
    {
        printf("Your exam is at 10:30 AM \n");
    }
    else 
    {
        printf("Invalid Division \n");
    }
    return 0;
}