//write a program to find the largest digit in a given numbe
class Largest
{
    void FindLargestDigit(int iNo)
    {
        int iDigit=0;
        int iLargest=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            if(iDigit>iLargest)
            {
                iLargest=iDigit;
            }
            iNo=iNo/10;
        }
      System.out.println("Largest digit is:"+iLargest);
        
    }
}
class program99
{
    public static void main(String A[])
    {
        Largest obj = new Largest();
        obj.FindLargestDigit(83429);
    }
}

