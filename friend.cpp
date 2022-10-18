//frienf function

#include<iostream>

using namespace std;

class data{
    int a,b;
    public:
    data(int x,int y){
        a=x;
        b=y;
    }
    friend void sum(data );
};
void sum(data d1){
    cout<<"friend: "<<d1.a+d1.b;
}
int main(int argc, char const *argv[])
{
    data d1(5,10);
    sum(d1);
    return 0;
}
