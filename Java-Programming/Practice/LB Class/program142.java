import java.util.*;
class program142
{
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
        Brr=null;    //refernce count kami zala garbage collector yenar
        System.gc();
        
    }
    
}
