//Accept number of rows and number of columns from user and display below pattern
//IP:   iRow=4    iCol=4
//OP:   * * * #
//      * * # @
//      * # @ @
//      # @ @ @

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt+jCnt==iCol+1)
            {
                printf("#\t");
            }
            else if(iCnt+jCnt<iCol+1)
            {
                printf("*\t");
            }
            else//iCnt+jCnt>iCol+1
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
   
        printf("\n");
    
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}