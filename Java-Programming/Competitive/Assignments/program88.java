//write a program to print all odd numbers up to N
class Even
{
    void PrintEvenNumbers(int n)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
            if(iCnt%2!=0)
            {
                System.out.println(iCnt);
            }
        }
        

    }

}
class program87
{
    public static void main(String A[])
    {
        Even obj = new Even();
        obj.PrintEvenNumbers(48);
    }
}
