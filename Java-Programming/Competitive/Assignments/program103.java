//write a program to display all factors of a given number
class Factors
{
    void DisplayFactors(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
               System.out.println(iCnt); 
            }

        }   
    }
}
class program103
{
    public static void main(String A[])
    {
        Factors obj=new Factors();
        obj.DisplayFactors(12);
    }
}