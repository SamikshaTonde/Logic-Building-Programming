//write a program which accept number from user and diaplay its multiplaction of factors
//IP: 12
//OP: 144(1*2*3*4*6)
//IP: 13
//OP: 1 (1)
//IP: 10
//OP: 10(1*2*5)
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;
    for (iCnt=1;iCnt<iNo;iCnt++)
    {
        
        if(iNo%iCnt==0)
        {
            
            printf("%d\n",iCnt);
            iMult=iMult*iCnt;

        }
        
    }return iMult;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the number");
    scanf("%d\n",&iValue);

    iRet=MultFact(iValue);

    printf("\n%d",iRet);
    return 0;
}