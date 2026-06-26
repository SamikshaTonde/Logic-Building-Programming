//write a program which accept number from user and diaplay its factors in deCreasing order
//IP: 12
//OP: 144(6 4 3 2 1)
//IP: 13
//OP: 1 (1)
//IP: 10
//OP: 10(5 2 1)
#include<stdio.h>
void FactReverse(int iNo)
{
    int iCnt=0;
    
    for (iCnt=iNo-1;iCnt>=1;iCnt--)
    {
        
        if(iNo%iCnt==0)
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

    FactReverse(iValue);

    return 0;
}