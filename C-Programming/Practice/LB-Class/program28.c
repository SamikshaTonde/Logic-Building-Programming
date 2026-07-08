#include<stdio.h>

void Display()
{
    
    int iCnt = 0;                              //loop ccounter
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh...\n");
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
