//write a program to display the grade of a student based on marks

class Grade
{
    void DisplayGrade(int marks)
    {
        if(marks>=80&&marks<=100)
        {
            System.out.println("Grade A");
        }
        else if(marks>=50&&marks<80)
        {
            System.out.println("Grade B");
        }
        else if(marks>=20&&marks<50)
        {
            System.out.println("Grade C");
        }
        else
        {
            System.out.println("Grade F"); 
        }

        
    }
}
class program92
{
    public static void main(String A[])
    {
        Grade obj = new Grade();
        obj.DisplayGrade(89);
    }
}
