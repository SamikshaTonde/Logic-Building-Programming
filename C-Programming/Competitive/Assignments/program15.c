#include<stdio.h>
#include<stdbool.h>                //check whether asa question ala ki he headerfile lihychi


bool CheckEvenOdd(int iNo)         //function return value also boolean
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder==0)
    {
        return true;

    }
    else
    {
        return false;

    }

    return iRemainder;
    

}
int main()
{
    int iValue = 0;
    int bRet=false;                  //false internally zero so we used false(0)

   
    printf("Enter no to check whether it is Even or Odd: ");       //\n kadhalee
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    
     if(bRet==true)
    {
        printf("%d is even\n",iValue);

    }
    else
    {
        printf("%d is odd\n",iValue);
    }

  
    return 0;

}
