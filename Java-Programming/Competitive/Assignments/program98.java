//write a program to Check whether a number is a perfect number or not

class Perfect
{
    void CheckPerfect(int iNo)
    {
        int iCnt=0;
        int iSum=0;
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt==0)
            {
               iSum=iSum+iCnt;
            }

        }
        
        if(iSum==iNo)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not  perfect");
        }
        
    }
}
class program98
{
    public static void main(String A[])
    {
        Perfect obj = new Perfect();
        obj.CheckPerfect(33);
    }
}

