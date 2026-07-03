//Accept number of rows and numbers of columns from user and display below pattern
//IP: iRow=3   iCol=4
//op:    A B C D  
    //   A B C D 
    //   A B C D
    //   A B C D

#include<stdio.h>
void pattern (int iRow,int iCol)
{
    int iCnt=0;
    int jCnt=0;
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        char ch1='A';
        char ch2='a';
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt%2==0)
            {
                printf("%c",ch2);
                ch2++;
            }
            else
            {
                printf("%c",ch1);
                ch1++;
            }
            
            
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