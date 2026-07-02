//write a program to count how many even and odd numbers are present between 1 and N
class EvenOdd
{
    void CountEvenOddRange(int iNo)
    {
        int iCnt=0;
        int iCountEven=0;
        int iCountOdd=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }

            
        }
        System.out.println("Even Count :"+iCountEven);
        System.out.println("Odd Count :"+iCountOdd);
        

    }
}
class program102
{
    public static void main(String A[])
    {
        EvenOdd obj=new EvenOdd();
        obj.CountEvenOddRange(50);
    }
}