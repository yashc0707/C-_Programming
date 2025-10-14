#include<iostream>

class Demo
{
    public:
   //Charcteristics
    int No1;
    int No2;

    //Behavaiours

    Demo() //Default Constructor
    {
        int No1=0;
        int No2=0;
    }

    Demo(int a,int b) //Parametrized Constructor
    {
        int No1=a;
        int No2=b;
    }

    ~Demo() //Destructor
    {

    }

};

int main()
{
    class Demo dobj1;
    class Demo dobj2(11,21);

    printf("%d\n");
    

    return 0;
}