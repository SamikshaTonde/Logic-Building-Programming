//write a program to check whether a number is palindrome or not
class palindrome
{
    void CheckPalindrome(int iNo)
    {
        int iDigit=0;
        int iRev=0;
        int iTemp=iNo;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;

            iRev=(iRev*10)+iDigit;

            iNo=iNo/10;
        }
        if(iTemp==iRev)
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("is not Palindrome");
        }


    }

}
class program82
{  
    public static void main(String A[])
    { 
        palindrome obj = new palindrome();

        obj.CheckPalindrome(121);
    
    }
}
