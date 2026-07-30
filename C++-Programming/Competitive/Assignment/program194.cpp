////////  GENERIC PROGRAM   ////////
//write generic program to accept N value from user and return largest value 

#include<iostream>
using namespace std;

template <class T>
T Largest(T Arr[] , int iSize)
{
    T Max=Arr[0];
    int i=0;
    
    //filter

    for(i=1; i<iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max=Arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0f,3.7f,9.8f,8.7f};

    int iLarg=Largest(arr,5);
    cout<<"the Sum of integer is:"<<iLarg<<endl;

    float fLarg=Largest(brr,4);
    cout<<"the Sum of float is:"<<fLarg<<endl;
    
    return 0;
}
