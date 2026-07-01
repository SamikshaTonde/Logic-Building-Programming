//write a program to print multiplication table of a number
class Table
{
    void PrintTable(int iNo)
    {
        int iCnt=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        for(iCnt=1;iCnt<=10;iCnt++)
        {
            System.out.println(iCnt*iNo);
        }
        
        
    }

}
class program85
{
    public static void main(String A[])
    {
        Table obj=new Table();
        obj.PrintTable(5);
    }
}
