//Accept Number of rows and number of columns from user and display below pattern
//IP:  iRow=5   iCol=5
//OP:  a b c d e
//     1 2 3 4 5
//     a b c d e
//     1 2 3 4 5 
//     a b c d e    
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    
    
    

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        char ch='a';
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt%2!=0)
            {
              printf("%c\t",ch);
              ch++;
            }
            else
            {
               printf("%d\t",jCnt); 
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