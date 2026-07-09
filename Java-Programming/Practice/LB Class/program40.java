// take input from user and which is divisible by 3 and 5


//TYPE 2

import java.util.Scanner;
class program40
{
    void CheckDivisible(int iNo)                             //function(nonStatic)
    {
         if((iNo%3==0)&&(iNo%5==0))
        {
            System.out.println("number is divisible by 3 and 5");

        }
        else
        {
            System.out.println("number is not divisible by 3 and 5");

        }
   
    }
    public static void main(String A[])                         //main body
    {

        Scanner sobj = new Scanner (System.in);                  

        int iValue = 0;


        System.out.println("Enter no");
        iValue=sobj.nextInt();

        CheckDivisible(iValuve);                                //function call(error beacuse static ahe why = memory no allocated

       
    }
}
