//perameterized constructer with hirachical inheritances

#include<iostream>

using namespace std;

class A{
    protected:
    int a;
    A(int x)
    {
        a=x;
    }
};
class B : public A
{
    protected:
    int b;
    public:
    void putb()
    {
        cout<<"a:"<<a<<" b: "<<b;
    }
    B(int x,int y):A(x)
    {
        b=y;
    }
};
class C: public A{
    protected:
    int c;
    public:
    void putc()
    {
        cout<<" c: "<<c;
    }
    C(int x,int y):A(x)
    {
        c=y;
    }
};
int main(int argc, char const *argv[])
{
    B b1(1,2);
    C c1(1,3);
    b1.putb();
    c1.putc();
    return 0;
}
