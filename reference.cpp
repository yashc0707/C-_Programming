#include<iostream>
using namespace std;

int main()
{
    int i=12;
    
    int&j=i;

    if(addressof(i)==addressof(j))
    {
        cout<<"Same Address"<<"\n";
    }

    // cout<<addressof(i)<<"\n";
    // cout<<addressof(j)<<"\n";
    cout<<j;
}