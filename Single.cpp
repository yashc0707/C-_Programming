#include<iostream>
using namespace std;

class Base
{
    public:

    int i;
    int j;

    void fun()
    {
        cout<<"Inside Base fun\n";
    }

    // int Addition(int iNo1,int iNo2)
    // {
    //     return iNo1+iNo2;
    // }

    // int Substraction(int iNo1,int iNo2)
    // {
    //     return iNo1-iNo2;
    // }


};

class Derived : public Base
{
    public:

         int x;

    void gun()
    {
        cout<<"Inside Derived gun\n";
    }

};

int main()
{

    Base bobj;
    Derived dobj;

    cout<<"Size of Base Class Object:"<<sizeof(bobj)<<"\n";

    cout<<"Size of Derived Class Object:"<<sizeof(dobj)<<"\n";
    return 0;
}