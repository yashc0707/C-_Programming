#include<iostream>
using namespace std;

class Arithmetic
{
    public:
    int iNo1=0;
    int iNo2=0;

    Arithmetic()
    {
        this->iNo1=0;
        this->iNo2=0;
    }

    Arithmetic(int a,int b)
    {
        this->iNo1=a;
        this->iNo2=b;
    }

    int Addition()
    {
        int iAns=0;

        iAns=this->iNo1+this->iNo2;
        return iAns;
    }

    int Substraction()
    {
        int iAns=0;

        iAns=this->iNo1-this->iNo2;
        return iAns;
    }


};

int main()
{
    Arithmetic aobj1(22,33);
    Arithmetic aobj2(44,33);

    int iret=0;

    iret=aobj1.Addition();
    cout<<"Addition is:"<<iret<<"\n";

    iret=aobj1.Substraction();
    cout<<"Substraction is:"<<iret<<"\n";

     iret=aobj2.Addition();
    cout<<"Addition is:"<<iret<<"\n";

     iret=aobj2.Addition();
    cout<<"Substraction is:"<<iret<<"\n";

    return 0;
}