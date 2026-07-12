// QUESTION Factor 
import java.util.Scanner;
class NumberX
{

    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;
        for (iCnt=1 ; iCnt<=(iNo/2) ; iCnt++)
        {
            if(iNo%iCnt==0)
            {
                System.out.println(iCnt);
            }
        }

    }
    

}
class program47
{
   
    public static void main(String A[])                         //main body
    {

        Scanner sobj = new Scanner (System.in);                 //object creation                

        int iValue = 0;
        boolean bRet=false;                                     //return false (0)


        System.out.println("Enter no");
        iValue=sobj.nextInt();
        
        NumberX nobj = new NumberX();
        nobj.DisplayFactors(iValue);                                    //call

        
       
    }
}
//Time Complexity : O(N/2)
//Where N>=0
