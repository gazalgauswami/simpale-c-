//perameterized constructer with hybrid inheritances

#include<iostream>

using namespace std;

class A{
    protected:
    int a;
    public:
    A(int x){
        a=x;
    }
};
class B : public A{
    protected:
    int b;
    public:
    B(int x,int y):A(x)
    {
        b=y;
    }
};
class D
{
    protected:
    int d;
    public:
    D(int z)
    {
        d=z;
    }
};
class C:public B,public D{
    int c;
    public:
    C(int x,int y,int z,int p):B(x,y),D(z){
        c=p;

     }
     void putc()
     {
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<"d: "<<d;
     }
};
int main(int argc, char const *argv[])
{
    C c1(1,2,4,3);
    c1.putc();

    return 0;
}

