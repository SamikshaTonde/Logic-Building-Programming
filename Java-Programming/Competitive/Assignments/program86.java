//write a program to check whether the number is prime or not
class Prime
{
    void CheckPrime(int iNo)
    {
        int iCount=0;
        int iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iCount++;
            }
        }
        if(iCount==2)
        {
            System.out.println("prime numeber");
        }
        else
        {
            System.out.println("is not prime number");
        }
    }

}
class program86
{
    public static void main(String A[])
    {
        Prime obj=new Prime();
        obj.CheckPrime(7);
    }

}
