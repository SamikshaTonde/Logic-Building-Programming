//array
#include<stdio.h>

 
int main()
{
    int Arr[5]={0};         //all elemnets get set to zero

    int iCnt=0;
    printf("enter the elements:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        
         scanf("%d",&Arr[iCnt]);

    }
    

    printf("elements of array are:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
         printf("%d\n",Arr[iCnt]);
    }

    
    return 0;
}

//complexity=2N