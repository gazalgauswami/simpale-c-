//binary operator overloading with return typee

#include<iostream>

using namespace std;

class temp{
    int a,b;
    public:
        temp(){};
        temp(int x){
            a=x;
        }
        void putdata(){
            cout<<"a:"<<a;
            cout<<"b: "<<b;
        }
        int operator+(int);
};
int temp::operator+(int t2){
    return(a+t2);
}
int main(int argc, char const *argv[])
{
    int k;
    temp t1(10);
    
    k=t1+7;
    cout<<"k:"<<k;

    return 0;
}
