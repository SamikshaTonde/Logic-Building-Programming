//Accept N Number fom user and return Frequency of Even Number
//IP:N:6
//OP:elements:85 66 3 80 93 88
//OP:3
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength )
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            printf("%d ",Arr[iCnt]);
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize=0;
    int iRet=0;
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
    printf("Enter %delements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter elements%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=CountEven(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;

}