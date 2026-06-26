//Write a program which accept number from user and display all its non fact.
//ip: 12
//op : 5 7 8 9 10 11

#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt=0;
    
    for (iCnt=1;iCnt<=iNo;iCnt++)
    {
        
        if(iNo%iCnt!=0)
        {
            
            printf("%d\n",iCnt);
            

        }
        
    }

}
int main()
{
    int iValue=0;
   

    printf("enter the number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}