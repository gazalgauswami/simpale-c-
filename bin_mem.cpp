//bianary operator overloading with member function

#include<iostream>

using namespace std;

class temp{
    int a,b;
    public:
        void getdata(){
            cout<<"Enter Value: ";
            cin>>a>>b;
        }
        void putdata(){
            cout<<a<<b<<endl;
        }
        void operator +(temp );
};
void temp :: operator+(temp t2){
    cout<<a+t2.a;
    cout<<b+t2.b;
}
int main(int argc, char const *argv[])
{
    temp t1,t2;
    t1.getdata();
    t2.getdata();
    t1.putdata();
    t2.putdata();
    t1+t2;
    return 0;
}


