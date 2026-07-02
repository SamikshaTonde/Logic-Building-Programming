//write a program to find the smallest digit in a given numbe
class Largest
{
    void FindSmallestDigit(int iNo)
    {
        int iDigit=0;
        int iSmallest=iNo;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            if(iDigit<iSmallest)
            {
                iSmallest=iDigit;
            }
            iNo=iNo/10;
        }
      System.out.println("Smallest digit is:"+iSmallest);
        
    }
}
class program100
{
    public static void main(String A[])
    {
        Largest obj = new Largest();
        obj.FindSmallestDigit(83429);
    }
}

