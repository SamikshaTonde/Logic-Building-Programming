//input from user 
//2 types buffer and non buffer (read)

import java.util.*;
class program36
{
    public static void main(String A[])                         //main body
    {
        Scanner sobj = new Scanner (System.in);                 //Scanner ha class ahe

        String sName= null;                                      //to store    
        int iAge=0;
        float fMarks = 0.0f;

        System.out.println("enter your name");                    //user kadun input ghete
        sName = sobj.nextLine();                                   //method for string

        System.out.println("enter your Age");
        iAge = sobj.nextInt();                                    //method int

        System.out.println("enter your Marks");
        fMarks = sobj.nextFloat();

        System.out.println("Name:"+sName);
        System.out.println("Age:"+iAge);
        System.out.println("Marks:"+fMarks);
    }
}