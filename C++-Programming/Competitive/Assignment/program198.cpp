/*
write geneic program which accept N value and 
search first occurance of any specific value

IP: 10 20 30 10 30 40 10 40 10
value to check frquency
OP:5

*/

#include<iostream>
using namespace std;
template<class T>
int SearchFirst(T *arr,int iSize,T iNo) 
{
    int i=0;
    
    for(i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
           return i;
        }
        
    }
   return -1;

}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet=SearchFirst(arr,9,40);

    if(iRet==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"first occurance is:"<<iRet;
    }
    return 0;
}