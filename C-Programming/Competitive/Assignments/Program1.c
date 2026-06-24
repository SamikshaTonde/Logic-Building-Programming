//Program to Divide Two Number

#include<stdio.h>
int Divide(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo2==0)       //Division by zero error mhnje No2 jo ahe to jar 0 asel tr tyane divide kele tr ans zero yeyil pn programming madhe te erro ahe mhnun return -1 kele
    {
        return -1;      
    }
    iAns=iNo1/iNo2;
    return iAns;

}
int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);
    printf("Division is%d",iRet);
    return 0;
}