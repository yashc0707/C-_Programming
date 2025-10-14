#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    int Addition(int A,int B) //Concrete Function 
    {
        return A+B;
    }

    virtual int Substraction(int A,int B)=0; //Abstract Function

};

class Derived:public Base  //Error beacause Function(Substraction) is not defined
{
    public:
    int x;


};


int main()
{
    
    Base *bp2=new Derived(); //Up Casting
    
    
    return 0;
}