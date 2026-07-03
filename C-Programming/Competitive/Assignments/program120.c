//Accept number of rows and numbers of columns from user and display below pattern
//IP: iRow=3   iCol=4
//op:    1  2  3   4   
    //   5  6  7   8   
    //   9 10  11  12
    //   

#include<stdio.h>
void pattern (int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    int iNo=1;
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
           printf("%d\t",iNo); 
           iNo++;    
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