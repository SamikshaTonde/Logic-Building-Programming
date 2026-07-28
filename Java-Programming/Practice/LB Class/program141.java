import java.util.*;
class program140
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);

        

        int iCnt=0;

        System.out.println("Enter the number of elements");
        int iLength=sobj.nextInt();

        //dynamic aray used
        int Brr[]=new int[iLength];                         //replace all malloc line => Brr=(int*)malloc (sizeof(int)*Length);

        System.out.println("Enter the elements:");

        for(iCnt=0; iCnt<Brr.length;iCnt++)
        {
            Brr[iCnt]=sobj.nextInt();                          //Array chya at madhe data store

        }
        System.out.println(" elements of the array re :");
        for(iCnt=0; iCnt<Brr.length;iCnt++)
        {
            System.out.println(Brr[iCnt]);                        

        }
        
    }
    
}
