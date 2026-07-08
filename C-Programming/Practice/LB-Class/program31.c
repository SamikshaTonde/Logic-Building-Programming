#include<stdio.h>

void Display(int iNo)
{
    
    int iCnt = 0;                              //loop ccounter
//filter
    if(iNo<0)
    {
       printf("Invalid Input\n");
       
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" %d : Jay Ganesh...\n",iCnt);
    }
}
int main()
{
    
    int iValue=0;

    printf("Enter the Frequency :");
    scanf("%d",&iValue);
      
    Display(iValue);
    

    
    return 0;

}
