//write a program to find the sum of even and odd digits seperately in a number
class Even
{
    void PrintEvenNumbers(int iNo)
    {
        int iDigit=0;
        int iSumEven=0;
        int iSumOdd=0;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            if(iDigit%2==0)
            {
                iSumEven=iSumEven+iDigit;
            }
            else
            {
                iSumOdd=iSumOdd+iDigit;

            }
            iNo=iNo/10;
        }
        System.out.println("Even Sum"+iSumEven);
        System.out.println("Odd Sum"+iSumOdd);


    }



}
class program89
{
    public static void main(String A[])
    {
        Even obj = new Even();
        obj.PrintEvenNumbers(123456);
    }
}
