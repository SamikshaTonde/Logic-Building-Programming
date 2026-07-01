//write a program to check whether a number is divisible by 5 and 11 or not
class Divisible
{
    void CheckDivisible(int iNo)
    {
        if(iNo%5==0&&iNo%11==0)
        {
            System.out.println("Divisible by 5 and 11");
        }
        else
        {
            System.out.println("Divisible");

        }

        
    }
}
class program93
{
    public static void main(String A[])
    {
        Divisible obj = new Divisible();
        obj.CheckDivisible(55);
    }
}
