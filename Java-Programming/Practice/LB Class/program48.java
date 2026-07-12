// QUESTION Factor 
import java.util.Scanner;
class NumberX
{

    public void SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum=0;

        for (iCnt=1 ; iCnt<=(iNo/2) ; iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Summation of factors:"+iSum);

    }
    

}
class program48
{
   
    public static void main(String A[])                         //main body
    {

        Scanner sobj = new Scanner (System.in);                 //object creation                

        int iValue = 0;
        boolean bRet=false;                                     //return false (0)


        System.out.println("Enter no");
        iValue=sobj.nextInt();
        
        NumberX nobj = new NumberX();
        nobj.SumFactors(iValue);                                    //call

        
       
    }
}
//Time Complexity : O(N/2)
//Where N>=0
