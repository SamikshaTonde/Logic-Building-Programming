//Write a program which accept number from user and return difference between summation all its factors and non fact.
//ip: 12
//op : -34 (16-50)

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;
    int Differ=0;
    
    for (iCnt=1;iCnt<iNo;iCnt++)
    {
        
        if(iNo%iCnt==0)
        {
            iSumFact=iSumFact+iCnt;

        }
        else if(iNo%iCnt!=0)
        { 
            iSumNonFact=iSumNonFact+iCnt;

        }
        Differ=iSumFact-iSumNonFact;
        
    }
    return Differ;

}
int main()
{
    int iValue=0;
    int iRet=0;
   

    printf("enter the number:");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Summation of Non Factor elements is :%d\n",iRet);

    return 0;
}