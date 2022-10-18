//data member in class
#include<iostream>

using namespace std;

class temp{
    int a,b,c;
    public:
    void sum(){
        a=5;
        b=10;
        c=a+b;
    }
    void result()
    {
        cout<<"The sum is: "<<c;
    }
};
int main(int argc, char const *argv[])
{
    temp t1;
    t1.sum();
    t1.result();

    return 0;
}
