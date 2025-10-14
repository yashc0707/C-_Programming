#include<iostream>
using namespace std;

class Base
{
    public:
    int i;
    int j;

    void fun()
    {
        cout<<"Inside Fun of Base\n";
    }

    void gun()
    {
        cout<<"Inside gun of Base\n";
    }

   virtual void sun()
    {
        cout<<"Inside sun of Base\n";
    }

    virtual void bun()
    {
        cout<<"Inside bun of Base\n";
    }

};

class Derived:public Base
{
    public:
    int x;

    void gun()
    {
        cout<<"Inside gun of Derived\n";
    }

    virtual void sun()
    {
        cout<<"Inside Sun of Derived\n";
    }

     void run()
    {
        cout<<"Inside run of Derived\n";
    }

    virtual void mun()
    {
        cout<<"Inside mun of Derived\n";
    }

};

int main()
{

    Base *bp1=new Base(); //No Casting
    Derived *dp1=new Derived(); // No Casting
    Base *bp2=new Derived(); //Up Casting
   // Derived *dp2=new Base(); Down Casting-Error 

   cout<<sizeof(Base)<<"\n";//4(i)+4(j)+4(Depands on OS)=12
   cout<<sizeof(Derived)<<"\n";//4(i)+4(j)+4(x)+4(Depands on OS)=16


   bp2 -> fun();
   bp2 -> gun();
   bp2 -> sun();
//    bp2 -> run(); Error Not in the Base
//    bp2 -> mun(); Emrror Not in the Base
   bp2 -> bun();



   return 0;



}