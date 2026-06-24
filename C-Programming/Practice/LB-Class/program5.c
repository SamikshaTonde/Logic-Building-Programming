/*
  ALGORITHM

    START
       Accept first number as no 1
       Accept first number as no 2
       perform addition of no1 and no2
       display the result
    STOP
*/


#include<stdio.h>
int main()
{
    float i ,j,k;
    printf("Enter fist number:\n");
    scanf("%f",&i);                     //float use

    printf("Enter second  number:\n");
    scanf("%f",&j);

    k=i+j;     //addition
    printf("Addition is :%f\n",k);

    return 0;
}
