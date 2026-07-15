//QUESTION = check wheter the number is Prime or not
import java.util.Scanner;
class NumberX
{

    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false ;
       

        for (bFlag = true , iCnt=2 ; iCnt<=(iNo/2) ; iCnt++)               //2 pasun start karan 1 prime ahe always so 1 lach baher padel
        {
            if((iNo%iCnt)==0)
            {
               bFlag=false;
               break;
            }

        }

        return bFlag;
    
        
    }
    

}
class program69
{
   
    public static void main(String A[])                         //main body
    {

        Scanner sobj = new Scanner (System.in);                 //object creation                

        int iValue = 0;
        boolean bRet = false;                                    //rekami pishvi

    


        System.out.println("Enter no");
        iValue=sobj.nextInt();
        
        NumberX nobj = new NumberX();
        bRet = nobj.CheckPrime(iValue);                                    //call


        if(bRet==true)
        {
            System.out.println("It is Prime");
        }
        else
        {
            System.out.println("It is not Prime");
            
        }
 
    }
}
//Time Complexity : O(N/2)
//Where N>=0
