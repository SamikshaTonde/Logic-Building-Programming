//Accept N Number from user and return  Frequency of 11 form it

//IP:N:6
//   NO:66
 //elements:85 66 3 66 93 88
//OP:2

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo )
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iCount++;
        }
        
    }
    printf(" Frequency:%d\n",iCount);
    
    return iCount;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iRet=0;
    int iValue=0;
    int *p=NULL;

    printf("Enter the number of elemnets");
    scanf("%d",&iSize);

    printf("Enetr the number ");
    scanf("%d",&iValue);


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
    iRet=Frequency(p,iSize,iValue);
    printf("%d",iRet);
    
    free(p);
    return 0;

}