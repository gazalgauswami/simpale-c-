//acess a private method of class

#include<iostream>

using namespace std;

class temp{
    int a,b;
    void getdata()
    {
        a=5;
        b=10;
    }
    public:
    void putdata()
    {
        getdata();//acess private method
        cout<<"The sum is: "<<a+b;
    }
};
int main(int argc, char const *argv[])
{
    temp t1;
    t1.putdata();

    return 0;
}
