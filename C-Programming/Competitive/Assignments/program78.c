//Accept n Number fom user and return the Differnece between largest and samllest number
//IP:  N:6
//elemnets:85 66 3 66 93 88
//OP:  Differnece90(93-3)

#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];
    int Differnce=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        else if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
        
    }
    Differnce=iMax-iMin;
    return Differnce;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iValue=0;
    int *p=NULL;
    int iRet=0;  

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
    iRet=Minimum(p,iSize);

    printf("Differnce  Number is %d",iRet);
    
    free(p);
    return 0;

}
