#include<iostream>
using namespace std;

int main()
{
    int length=0;
    int *Arr=NULL;

    cout<<"Enter the no of elements:"<<"\n";
    cin>>length;
    //Step 1: Allocate The Memory
    Arr=new int[length];

    if(Arr==NULL)
    {
        cout<<"Unable to allocate memory"<<"\n";
    }
    else{
        cout<<"Memory gets successfully allocated"<<"\n";
    }

    //Step 2:Use the memory
    //step 3:Deallocate the memory

    delete [] Arr;



    return 0;
}