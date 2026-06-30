//Accept n Number fom user and display all such number which contains 3 digits in it
//IP:  N:6
//elemnets:8775 686 3 66 953 898
//OP: 686 953 898

#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[],int iLength)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<0)
        {
            Arr[iCnt]=-Arr[iCnt];
        }
        if((Arr[iCnt]>=100)&&(Arr[iCnt]<=999))
        {
            printf("%d ",Arr[iCnt]);
        }

        
    }
}
int main()
{
    int iSize=0;
    int iCnt=0;
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
    Digits(p,iSize);

    
    free(p);
    return 0;

}
