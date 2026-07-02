//write a program to find the sum of all even numbers upto N
class EvenSum
{
    void SumEvenNumbers(int iNo)
    {
        int iCnt=0;
        int EvenSum=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
                EvenSum=EvenSum+iCnt;
            }
            
        }
        System.out.println("Sum is"+EvenSum);
        
    }
}
class program96
{
    public static void main(String A[])
    {
        EvenSum obj = new EvenSum();
        obj.SumEvenNumbers(10);
    }
}

