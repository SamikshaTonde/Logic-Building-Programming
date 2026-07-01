//write a program to print each digit of a number separately
class Digit
{
    void PrintDigit(int iNo)
    {
        int iDigit=0;
        while(iNo!=0)
        {
            
            iDigit=iNo%10;
            System.out.println(iDigit);
            iNo=iNo/10;

        }
        
    }
}
class program94
{
    public static void main(String A[])
    {
        Digit obj = new Digit();
        obj.PrintDigit(9876);
    }
}
