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
        void operator +(int );
};
void temp :: operator+(int x){
    cout<<a+x;
    cout<<b+x;
}
int main(int argc, char const *argv[])
{
    int m=10;
    temp t1;
    t1.getdata();
    t1.putdata();
    
    t1+m;
    return 0;
}


