//object as function argument in class

#include<iostream>

using namespace std;

class temp{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter a & b: ";
        cin>>a>>b;
    }
    void sum(temp t1){
        cout<<"The sum is: "<<t1.a+t1.b;
    }
};
int main(int argc, char const *argv[])
{
    temp t1;
    t1.getdata();
    t1.sum(t1);
    return 0;
}
