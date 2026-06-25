/*
   START
        Accept number as No
        if No is completely divisible by two 
            then print even 
        otherwise 
               print odd

   STOP
    
    START
        Accept number as No
        divide no by 2
        if remainder is 0
             then pint as even
        otherwise 
               print as odd

*/

#include<stdio.h>
int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter no:\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;
    if(iRemainder==0)
    {
        printf("number is even\n");

    }
    else
    {
        printf("number is odd\n");
    }
    return 0;

}