#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Inside Base Fun\n";
     
    }

    void gun()
    {
        cout<<"Inside Base gun\n";
     
    }

    void sun()
    {
        cout<<"Inside Base sun\n";
     
    }

    void bun()
    {
        cout<<"Inside Base bun\n";
     
    }

   
};

class Derived:public Base
{
    public:
    int x;

    void gun()
    {
        cout<<"Inside Derived gun\n";
     
    }

    void sun()
    {
        cout<<"Inside Derived sun\n";
     
    }

    void run()
    {
        cout<<"Inside Derived run\n";
     
    }

    void mun()
    {
        cout<<"Inside Derived mun\n";
     
    }



};


int main()
{

    Base *bp1=new Base();  //No Casting
    Derived *dp1=new Derived(); //No Casting

    Base *bp2=new Derived(); //Up Casting
    Derived *dp2=new Base(); //Down Casting  Error

    
    
    return 0;
}