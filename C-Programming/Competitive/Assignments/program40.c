//write a program which accept area in squrae feet and convert it into square meter (1 squarefeet=0.0929 sqare meter)
//ip:5
//op:0.464515
#include<stdio.h>
double SquareMeter(int iValue)
{
    double SqurMeter=0.0;
    SqurMeter = iValue* 0.00929;
    
    return SqurMeter ;
}
int main()
{
    int iValue=0; ;
    double dRet=0.0;
    
    printf("Enetr area in sqaure feet");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("the sqaure meter is :%lf\n",dRet);

    return 0;

}