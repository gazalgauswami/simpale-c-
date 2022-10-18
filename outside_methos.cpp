//outside method of class

#include<iostream>

using namespace std;

class temp{
    int a,b;
    public:
    void getdata();
    void putdata();
    void sum(temp t1,temp t2,int t4);
};
void temp ::getdata()
{
    a=2;
    b=3;
}
void temp::putdata()
{
    cout<<"\n a: "<<a<<" b: "<<b;
}
void temp::sum(temp t1,temp t2,int t4)
{
    a=t1.a+t2.a+t4;
    b=t1.b+t2.b+t4;
}
int main(int argc, char const *argv[])
{
    temp t1,t2,t3;
    int t4;
    t4=1;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2,t4);
    t1.putdata();
    t2.putdata();
    t3.putdata();
    return 0;
}
