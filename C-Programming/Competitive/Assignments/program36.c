//Write a program which accept radius of circle from user and calulateits Area,consider value of PI as 3.14 (Area=PI*radius*radius)
//IP:5.3
//OP:88.20206
#include<stdio.h>
double CircleArea(float fRadius)
{
    float Area=0.0;
    float PI=3.14;
    Area=PI*fRadius*fRadius;
    return Area;

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    
    printf("Enetr Radius");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("the Area of the circle id :%lf\n",dRet);

    return 0;

}