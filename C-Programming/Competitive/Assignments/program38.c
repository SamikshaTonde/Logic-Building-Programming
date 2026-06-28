//write a program which accept distance in kilometer and convert it into meter.(1=1000)
//ip:5
//OP:5000
#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iAns=0;
    iAns=iNo*1000;
    return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enetr Radius");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("Meter is:%d\n",iRet);

    return 0;

}