#include<stdio.h>
#include<stdbool.h>                //check whether asa question ala ki he headerfile lihychi


bool CheckEvenOdd(int iNo)         //function return value also boolean
{
    if( iNo % 2 ==0)
    {
        return true;

    }
    else
    {
        return false;

    }

    
    

}
int main()
{
    int iValue = 0;
    int bRet=false;                  //false internally zero so we used false(0)

   
    printf("Enter no to check whether it is Even or Odd: ");       //\n kadhalee
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    
    if(bRet)
    {
        printf("%d is even\n",iValue);

    }
    else
    {
        printf("%d is odd\n",iValue);
    }

  
    return 0;

}
