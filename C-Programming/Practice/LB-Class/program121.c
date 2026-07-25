
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    printf("elements of te array are\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

    }

}
int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt=0;

    //step 1: Accept the number of element
    printf("enter the number of elements:\n");
    scanf("%d",&iLength);
    
    //step2: allocate the memeory
    Brr=(int*)malloc(iLength*sizeof(int));



    //step3: accept the value fom user

    printf("enter the elements:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);

    }

    //Step 4: use the memeory(logic)
    Display(Brr,iLength);

    //step 5: Dellocate the memory
    free(Brr);




    return 0;
}

