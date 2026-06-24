#include<stdio.h>

//function
float AddTwoNumbers(float fNo1,float fNo2 )   //first input    //second input)                     
{
    float fAns=0.0f;                     //variable to store result

    fAns= fNo1 + fNo2;                   //perform addtion

    return fAns;
}                     

int main()
{
    //local variable
    float fValue1=0.0f;                 //to store first input
    float fValue2=0.0f;                 //to store second input
    float fResult=0.0f;                 //to store the result
    
    printf("Enter fist number:\n");
    scanf("%f",&fValue1);                     //float use

    printf("Enter second  number:\n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2);             //function call (line no 3 to 10)
    printf("Addition is :%f\n",fResult);

    return 0;
}
