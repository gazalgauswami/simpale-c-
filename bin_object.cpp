//binary operator with return type with object

#include<iostream>

using namespace std;

class temp{
    int a;
    public:
    temp(){}
    temp(int x){
        a=x;
    }
    void putdata(){
        cout<<"a: "<<a<<endl;
    }
    temp operator+(temp );
};
temp temp ::operator+(temp t3){
    int m;
    m=a+t3.a;
    return(m);
}
int main(int argc, char const *argv[])
{
    temp t1(10),t2(20),t3;
    t1.putdata();
    t2.putdata();
    t3=t1+t2;
    t3.putdata();

    return 0;
}
