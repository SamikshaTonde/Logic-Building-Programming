//write a program to find the sum of Digits of a number
class Digits
{
    int SumOfDigits(int iNo)
    {
        int iDigit=0;
        int iSum=0;

        while(iNo!=0)      //jo paryant no zero hot nai toparynt chalu rahil
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;  
        }
        return iSum;
    }

}
class program81
{
    public static void main(String A[])
    {
        Digits obj=new Digits();

        int iRet=0;
        iRet=obj.SumOfDigits(1234);
        System.out.println("Sum is : " + iRet);

    }
}