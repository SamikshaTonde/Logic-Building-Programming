/*
write geneic program which accept N value and 
search last occurance of any specific value

IP: 10 20 30 10 30 40 10 40 10
value to check frquency
OP:5

*/

#include<iostream>
using namespace std;
template<class T>
int SearchLast(T *arr,int iSize,T iNo) 
{
    int i=0;
    int iPos=-1;      //-1 karan jar 100 shodhayala lavla pn 100 kuthech nahi mg return ipos honar ahe
    
    for(i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
           iPos=i;
        }
        
    }
   return iPos;

}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet=SearchLast(arr,9,40);

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