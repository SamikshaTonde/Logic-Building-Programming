// take input from user and which is divisible by 3 and 5


//TYPE 2

import java.util.Scanner;
class program43
{
    public static boolean CheckDivisible(int iNo)                             //function
    {
         if((iNo%3==0)&&(iNo%5==0))
        {
            return true;

        }
        else
        {
            return false;
            
        }
   
    }
    public static void main(String A[])                         //main body
    {

        Scanner sobj = new Scanner (System.in);                 //object creation                

        int iValue = 0;
        boolean bRet=false;                                     //return false (0)


        System.out.println("Enter no");
        iValue=sobj.nextInt();

        bRet= CheckDivisible(iValue);                                //function call
        if(bRet==true)
        {
            System.out.println("number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("number is not divisible by 3 and 5");

        }
       
    }
}
