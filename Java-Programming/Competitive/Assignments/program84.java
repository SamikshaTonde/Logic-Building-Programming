class Maximum
{
    void FindMax(int a, int b,int c )
    {
        if(a>b)
        {
            System.out.println(a+"is Maximum");
        }
        else if(b>c)
        {
            System.out.println(b+"is Maximum");
        }
        else if(c>a)
        {
            System.out.println(c+"is Maximum");
        }

    }

}
class program84
{
    public static void main(String A[])
    {
        Maximum obj=new Maximum();
        obj.FindMax(3,7,2);
    }
}
