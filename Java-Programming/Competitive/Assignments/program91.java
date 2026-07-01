//write a pogram to check whether a given year is a leap year or not
class LeapYear
{
    void CheckLeapYear(int year)
    {
        if(year%400==0)
        {
            System.out.println("Leap Year");
        }
        else if(year%100==0)
        {
            System.out.println("not Leap Year");
        }
        else if(year%4==0)
        {
            System.out.println(" Leap Year");
        }
        else
        {
            System.out.println("not Leap Year");
        }



    }
}
class program91
{
    public static void main(String A[])
    {
        LeapYear obj = new LeapYear();
        obj.CheckLeapYear(2024);
    }
}
