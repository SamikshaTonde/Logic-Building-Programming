//Accept number of rows and numbers of columns from user and display below pattern
//IP: iRow=3   iCol=4
//op:    A A A A A  
    //   B B B B B  
    //   C C C C C 
    //   D D D D D 

#include<stdio.h>
void pattern (int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    char ch='A';
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        
        
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
           printf("%c",ch);     
        }
        ch++;
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