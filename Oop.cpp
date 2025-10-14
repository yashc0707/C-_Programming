#include<iostream>
using namespace std;

class Arithmetic
{
    public:
    int iNo1;
    int iNo2;

    Arithmetic()
    {
        int iNo1=0;
        int iNo2=0;
    }

    Arithmetic(int a,int b)
    {
        int iNo1=a;
        int iNo2=b;
    }

    int Addition()
    {
        int iAns=0;

        iAns=iNo1+iNo2;
        return iAns;
    }
    int Substraction()
    {
        int iAns=0;

        iAns=iNo1-iNo2;
        return iAns;
    }

    
};
int main()
{
    Arithmetic aobj(44,33);

    int iret=0;

    iret=aobj.Addition();
    cout<<"Addition is:"<<iret<<"\n";

    iret=aobj.Substraction();
    cout<<"Substriction is:"<<iret<<"\n";

   
   return 0;
}