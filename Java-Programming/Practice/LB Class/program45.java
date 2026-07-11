// take input from user and which is divisible by 3 and 5


//TYPE 3

import java.util.Scanner;
class NumberX
{
     public  boolean CheckDivisible(int iNo)                             //function
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

}
class program45
{
   
    public static void main(String A[])                         //main body
    {

        Scanner sobj = new Scanner (System.in);                 //object creation                

        int iValue = 0;
        boolean bRet=false;                                     //return false (0)


        System.out.println("Enter no");
        iValue=sobj.nextInt();
        
        NumberX nobj = new NumberX();

        bRet= nobj.CheckDivisible(iValue);                                //function call
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
