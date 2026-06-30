//Accept n Number from user and accept Range ,Display all elements from that range
//IP:N:6
//   star:60
//   end :90
//elements: 85 66 3 66 93 88
//OP:66 76 88
#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int iStart , int iEnd)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {

        if((Arr[iCnt]>=iStart)&&(Arr[iCnt]<=iEnd))
        {
            printf("%d",Arr[iCnt]);
           
        }

    }

}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iValue1=0 , iValue2=0;
    int *p=NULL;
    

    printf("Enter the number of elemnets");
    scanf("%d",&iSize);

    printf("Enetr the Start number ");
    scanf("%d",&iValue1);

    printf("Enetr the End point ");
    scanf("%d",&iValue2);

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
    Range (p,iSize,iValue1, iValue2);
    
    free(p);
    return 0;

}
