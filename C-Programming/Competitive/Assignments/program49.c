//write a program which accept temperature in fahrenheit and covert it into celsius (1 celsius=(fahrenheit-32)*(5/9))
//ip:10
//op:-12.2222  (10-3)*(5/9)

#include<stdio.h>
double FhtoCs(float fTemp)
{
    float tCal=0.0;
    tCal=((fTemp-32)*(5.0/9.0));

    return tCal;
}
int main()
{
    float fValue=0.0 ;
    double dRet=0.0;
    
    printf("Enetr temperture in faherenheit");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("the celsis themperature is :%lf\n",dRet);

    return 0;

}