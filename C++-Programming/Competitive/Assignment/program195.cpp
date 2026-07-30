////////  GENERIC PROGRAM   ////////
//write generic program to accept N value from user and return Smallest value 

#include<iostream>
using namespace std;

template <class T>
T Smallest(T Arr[] , int iSize)
{
    T Min=Arr[0];
    int i=0;
    
    //filter

    for(i=1; i<iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min=Arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0f,3.7f,9.8f,8.7f};

    int iSmall=Smallest(arr,5);
    cout<<"the Smallest of integer is:"<<iSmall<<endl;

    float fSmall=Smallest(brr,4);
    cout<<"the Smallest of float is:"<<fSmall<<endl;
    
    return 0;
}
