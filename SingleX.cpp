#include<iostream>
using namespace std;

class Base //Size:8
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

class Derived : public Base  //Size:12
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

    bobj.fun(); 

    dobj.fun();
    dobj.gun();

    return 0;
}