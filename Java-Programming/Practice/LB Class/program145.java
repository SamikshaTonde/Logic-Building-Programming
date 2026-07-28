import java.util.*;
class program143
{
    public static int Update(int Arr[],int iSize)          
    {
        int iCnt=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
             Arr[iCnt]++;   

        }             

    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);
        int iCnt=0;

        System.out.println("Enter the number of elements");
        int iLength=sobj.nextInt();

        //dynamic aray used
        int Brr[]=new int[iLength];                         
        System.out.println("Enter the elements:");

        for(iCnt=0; iCnt<Brr.length;iCnt++)
        {
            Brr[iCnt]=sobj.nextInt();                          

        }
        System.out.println(" elements of the array are :");
        for(iCnt=0; iCnt<Brr.length;iCnt++)
        {
            System.out.println(Brr[iCnt]);                        

        }
        int iRet=Update(Brr);
        System.out.println("Summation is :"+iRet);
        Brr=null;    
        System.gc();
        
    }
    
}
