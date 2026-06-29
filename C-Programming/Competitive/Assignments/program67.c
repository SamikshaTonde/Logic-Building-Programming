//Accept N Number from user and return differnece between Frequency of Even Number and Odd number

//IP:N:6
//OP:elements:85 66 3 80 93 88
//OP:1(4-3)
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength )
{
    int iCnt=0;
    int iEvenCount=0;
    int  iOddCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            
            iEvenCount++;
        }
        else{
            iOddCount++;
        }
    }
    printf("Even Frequency:%d\n",iEvenCount);
    printf("Odd Frequency:%d\n",iOddCount);
    
    return iEvenCount-iOddCount;
}
int main()
{
    int iSize=0;
    
    int iCnt=0;
    int *p=NULL;

    printf("Enter the number of elemnets");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }
    printf("Enter%d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter elements%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    CountEven(p,iSize);
    
    free(p);
    return 0;

}