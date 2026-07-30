////////  GENERIC PROGRAM   ////////
//write generic program to find laget number from three numbers

#include<iostream>
using namespace std;

template <class T>
T Max(T No1,T No2, T No3)
{
    if(No1>=No2 && No1>=No3)
    {
        return No1;
    }
    else if(No2>=No1 && No2>=No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    int iRet=0;
    iRet=Max(10,20,30);
    cout<<"the largest value is:"<<iRet<<endl;

    return 0;
}
