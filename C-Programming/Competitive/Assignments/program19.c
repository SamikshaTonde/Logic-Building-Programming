//Write a program which accept number from user and returnsummation all its non fact.
//ip: 12
//op : 5 7 8 9 10 11

#include<stdio.h>
int NonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
    
    for (iCnt=1;iCnt<iNo;iCnt++)
    {
        
        if(iNo%iCnt!=0)
        {
            
            printf("%d\n",iCnt);
            iSum=iSum+iCnt;

        }
        
        
    }return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
   

    printf("enter the number:");
    scanf("%d",&iValue);

    iRet=NonFact(iValue);
    printf("Summation of Non Factor elements is :%d\n",iRet);

    return 0;
}