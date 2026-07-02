//write a program to print number from N down to 1 in reverse order
class Print
{
    void PrintReverse(int iNo)
    {
        int iCnt=0;

        for(iCnt=iNo;iCnt>=1;iCnt--)
        {
            System.out.println(iCnt);
        }
        
    }
}
class program97
{
    public static void main(String A[])
    {
        Print obj = new Print();
        obj.PrintReverse(10);
    }
}

