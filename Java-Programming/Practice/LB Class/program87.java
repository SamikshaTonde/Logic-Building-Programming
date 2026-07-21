

import java.util.*;
class DigitX
{
    public void CountOddDigits(int iNo)
    {
        int iDigit=0;
        int iCount1=0;
        int iCount2=0;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            
            if(iDigit%2!=0)
            {
                iCount++;

            }
           

            iNo=iNo/10;

        }

        return iCount;
        
    }
  
    
}
class program85
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in)
        DigitX dobj = new DigitX();

        int iValue=0;
        int iRet=0;

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        iRet = dobj.CountOddDigit(iValue);
        System.out.println("enter number:");


    }

}