
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
 
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];

    }
return iSum;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt=0 , iRet=0;

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
    iRet=Summation(Brr,iLength);

    
     printf("Addition is:%d\n",iRet);
    //step 5: Dellocate the memory
    free(Brr);




    return 0;
}

