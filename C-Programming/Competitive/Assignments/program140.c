//Accept Number of rows and number of columns from user and display below pattern
//IP:  iRow=5   iCol=5
//OP:  
/*
     1 2 3 4 5
     1 2     5
     1   3   5
     1     4 5
     1 2 3 4 5
*/


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
               printf("%d\t",jCnt);
           }
           else if(iCnt==jCnt)
           {
               printf("%d\t",iCnt);
           }
           else
           {
               printf("\t");
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