class Maximum
{
    void FindMax(int a, int b)
    {
        if(a>b)
        {
            System.out.println(a+"is Maximum");
        }
        else
        {
            System.out.println(b+"is Maximum");
        }

    }

}
class program83
{
    public static void main(String A[])
    {
        Maximum obj=new Maximum();
        obj.FindMax(20,15);
    }
}
