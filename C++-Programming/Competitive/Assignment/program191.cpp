////////  GENERIC PROGRAM   ////////
//write generic program to multiply two numbers

#include<iostream>
using namespace std;

template <class T>
T Multiply(T No1,T No2)
{
    T ans;
    ans=No1*No2;
    return ans;
}

int main()
{
    int iRet=Multiply (10,20);
    cout<<"Multiplication of integer is:"<<iRet<<endl;

    float fRet=Multiply(10.0f,20.0f);
    cout<<"Multiplication of float is:"<<fRet<<endl;

    return 0;
}
