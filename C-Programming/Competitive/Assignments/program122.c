//Accept Number of rows and number of columns from user and display below pattern
//IP:  iRow=4   iCol=4
//OP:  2 4 6 8 10
//     1 3 5 7 9
//     2 4 6 8 10
//     1 3 5 7 9
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt%2!=0)
            {
              printf("%d",2*jCnt);
            }
            else
            {
               printf("%d",2*jCnt-1); 
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