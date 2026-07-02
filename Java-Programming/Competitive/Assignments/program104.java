//write a program to count total number of factors of a given number
class Factors
{
    void DisplayFactors(int iNo)
    {
        int iCnt=0;
        int iCount=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
               System.out.println(iCnt);
               iCount++;
            }

        } 
        System.out.println("sum of all factors:"+iCount);  
    }
}
class program104
{
    public static void main(String A[])
    {
        Factors obj=new Factors();
        obj.DisplayFactors(12);
    }
}