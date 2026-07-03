//Accept number of rows and numbers of columns from user and display below pattern
//IP: iRow=3   iCol=5
//op:   5 4 3 2 1
    //  5 4 3 2 1
    //  5 4 3 2 1

#include<stdio.h>
void pattern (int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=iCol;jCnt>=1;jCnt--)
        {
            printf("%d\t",jCnt);
        }
        printf("\n");
   
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter number of Row and Columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}