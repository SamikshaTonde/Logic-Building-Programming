//Accept Number of rows and number of columns from user and display below pattern
//IP:  iRow=5   iCol=5
//OP:  
//     * * * * *
//     * @ @ @ *
//     * @ @ @ *
//     * @ @ @ *
//     * @ @ @ *
//     * * * * * 
 
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
           if(iCnt==1||iCnt==iRow||jCnt==1||jCnt==iCol)
           {
               printf("*\t");
           }
           else
           {
               printf("@\t");
           }
        }
         printf("\n");
       
    }
}
int main()
{
    int iValue1=0 , iValue2=0;

    printf("Enter number of rows of colums");
    scanf("%d%d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}