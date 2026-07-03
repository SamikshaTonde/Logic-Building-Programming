//Accept number of row and number of columns from user and display below pattern
//IP:  iRow=4   iCol=4
//OP:  1 2 3 4
//     5 6 7 8 
//     9 1 2 3 
//     4 5 6 7 
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    int iNo=1;;

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            printf("%d\t",iNo);
            iNo++;
            if(iNo==10)
            {
                iNo=1;
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