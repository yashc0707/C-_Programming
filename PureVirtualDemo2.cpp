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

class Derived:public Base 
{
    public:
    int x;

    int Substraction(int A,int B) //Concrete
    {
        return A-B;
    }

    int Multiplication(int A,int B) //Concrete
    {
        return A*B;
    }

};


int main()
{
    
    Base *bp=new Derived(); //Up Casting

    int iret=0;

    iret=bp->Addition(11,10); //21
    cout<<iret<<"\n";

    iret=bp->Substraction(11,10); //1
    cout<<iret<<"\n";

    // iret=bp->Multiplication(10,11); -ERROR

    
    
    return 0;
}