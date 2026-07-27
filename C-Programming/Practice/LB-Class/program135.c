//Accept Number of rows and number of columns from user and display below pattern
//IP:  iRow=5   iCol=5
//OP:  
//     1 2 3 4
//       2 3 4
//         3 4 
//           4


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt,jCnt;

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        // Print Spaces
        for(jCnt=1;jCnt<iCnt;jCnt++)
        {
            printf("\t");
        }

        // Print Numbers
        for(jCnt=iCnt;jCnt<=iCol;jCnt++)
        {
            printf("%d\t",jCnt);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1,iValue2;

    printf("Enter rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}