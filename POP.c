#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1+iNo2;
    return iAns;
}

int Substraction(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1-iNo2;
    return iAns;
}

int main()
{
    int iret=0;

    Addition(11,22);
    printf("Addition of No:%d\n",Addition);

    Substraction(22,11);
    printf("Substraction of No:%d\n",Substraction);

    return 0;
}