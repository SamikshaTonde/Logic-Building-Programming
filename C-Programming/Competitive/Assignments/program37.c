//write a program which accept width and height of rectangule from user and calculate its area (area=width*height)
//ip:5.3    9.78
//op:51.834
#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    float Area=0.0;
    Area=fWidth*fHeight;

    return Area;
}
int main()
{
    float fValue1=0.0 ,fValue2=0.0;
    double dRet=0.0;
    
    printf("Enetr Width");
    scanf("%f",&fValue1);

    printf("Enetr Height");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("the area of the reactangle is :%lf\n",dRet);

    return 0;

}