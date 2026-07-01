//write a program to calculat the power of a number using loops
class Power
{
    void CalculatePower(int base,int power)
    {
        int iAns=1;
        int iCnt=0;
        for(iCnt=1;iCnt<=power;iCnt++)
        {
            iAns=iAns*base;
        }
        System.out.println("power is:"+iAns);

        
        
    }
}
class program95
{
    public static void main(String A[])
    {
        Power obj = new Power();
        obj.CalculatePower(2,2);
    }
}

