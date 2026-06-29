//Accept N numbers fom user and display all such elements which are divisible by 5 and 3
//IP:6
//ele:85 66 3 15 93 88
//OP: 15

#include<stdio.h>
#include<stdlib.h>
void Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iEvenSum=0;
    int iOddSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%3==0)&&(Arr[iCnt]%5==0))
        {
            printf("%d ",Arr[iCnt]);

        }
        
    }

}
int main()
{
    int iSize=0;
    int iCnt=0;
    int *p= NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter%d elemnets\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements%d:",iCnt+1);
        scanf("%d",&p[iCnt]);

    }

    Difference(p,iSize);
   
    free(p);
    return 0;
}  