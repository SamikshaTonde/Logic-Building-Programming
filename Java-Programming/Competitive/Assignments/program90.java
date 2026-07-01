//write a program to chck whether the number is positive or negative or zero
class CheckNo
{
    void CheckSign(int iNo)
    {
        if(iNo>0)
        {
            System.out.println("Number is Positive");

        }
        else if(iNo<0)
        {
            System.out.println("Number is negative");
        }
        else if(iNo==0)
        {
            System.out.println("Number is Zero");
        }

    }
}
class program90
{
    public static void main(String A[])
    {
        CheckNo obj=new CheckNo();
        obj.CheckSign(8);
    }
}