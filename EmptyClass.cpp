#include<iostream>
using namespace std;

class Demo
{
    public:

    void Display()
    {
         cout<<"Inside Diaplay\n";

    }
};
int main()
{
    Demo dobj;

    cout<<sizeof(dobj); //1 Byte

    return 0;
}