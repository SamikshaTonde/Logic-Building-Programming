//Accept n Number fom user and eturn the Smallest number
//IP:  N:6
//elemnets:85 66 3 66 93 88
//OP:  3

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Minimum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iValue=0;
    int *p=NULL;
    BOOL bRet=FALSE;  

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
    bRet=Minimum(p,iSize);

    printf("Smallest Number is %d",bRet);
    
    free(p);
    return 0;

}
