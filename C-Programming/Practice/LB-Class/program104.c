#include<stdio.h>
void Display(int *iPtr)
{
    printf("value of iptr:%d\n",iPtr);
    
}
int main()
{

    int Arr[5]={10,20,30,40,50};

    printf("Base address os arr:%d\n",Arr);


    Display(Arr);

    
    return 0;
}

