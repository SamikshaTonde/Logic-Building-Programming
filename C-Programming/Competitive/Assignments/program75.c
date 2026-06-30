//Accept n Number from user and return product of all odd elements
//IP:N:6
//elements: 85 66 3 66 93 88
//OP:66 76 88
#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iLength)
{
    int iCnt=0;
    int MulProduct=1;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {

        if(Arr[iCnt]%2!=0)
        {
            printf("%d ",Arr[iCnt]);
           MulProduct=MulProduct*Arr[iCnt];
        }
    
    }
    return MulProduct;

}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iRet=0;
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
    iRet=Product(p,iSize);
    printf("Product is%d",iRet);
    
    free(p);
    return 0;

}
