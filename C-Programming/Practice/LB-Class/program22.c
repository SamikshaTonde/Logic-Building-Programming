#include<stdio.h>

int CalculateTicketPrice(int iAge)                     //function
{
    //input Filter
    if(iAge<0)                                         
    {
        
        return -1;                                      //-1 indicate issue
    }

    if(iAge>=0 && iAge<=5)
    {
        return 0;
   
    }
    else if(iAge>=6 && iAge<=18)
    {
        return 500;
    }
    else if(iAge>=19 && iAge<=50)
    {
        return 900;
    }
    else
    {
        return 400;
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Please enter your Age to calculate ticket Price : ");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);                       //function call

    if(iRet==-1)                                               //filter madhun alay
    {
        printf("Please enter positive age\n");


    }
    else
    {

    printf("your ticket price will be %d rupees\n",iRet);
    }
    return 0;

}
