//write a program to print all numbers from 1 to N that are divisible by both 2 and 3

class PrintDivisible
{
    void PrintDivisibleBy2and3(int iNo)
    {
        int iCnt=0;
        int iCount=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0&&iCnt%3==0)
            {
               System.out.println(iCnt);
               
            }

        } 
         
    }
}
class program105
{
    public static void main(String A[])
    {
        PrintDivisible obj=new PrintDivisible();
        obj.PrintDivisibleBy2and3(30);
    }
}