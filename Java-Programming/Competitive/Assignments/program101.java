//write a program to calculate the product of digits of a number 
class product
{
    void ProductOfDigit(int iNo)
    {
        int iDigit=0;
        int iMul=1;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iMul=iMul*iDigit;
            iNo=iNo/10;

        }
        System.out.println("product is:"+iMul);

    }

}
class program101
{
    public static void main(String A[])
    {
        product obj = new product();
        obj.ProductOfDigit(234);
    }

}