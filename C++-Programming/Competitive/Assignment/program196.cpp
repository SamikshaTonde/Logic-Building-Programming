/*
write geneic program which accept one value and one number from user 
print that value that number of times on screen
IP: M  7
OP: M M M M M M M 
IP: 11  3
OP: 11 11 11
IP: 3.7  6
OP: 3.7  3.7  3.7  3.7  3.7  3.7
*/

#include<iostream>
using namespace std;
template<class T>
void Display(T Value,int size) //count slways integer
{
    int i=0;
    for(i=1;i<=size;i++)
    {
        cout<<Value<<" ";
    }
    cout<<endl;

}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}