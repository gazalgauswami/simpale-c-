//function operator overloading

#include<iostream>

using namespace std;

class temp{
    public:
        void operator()(){
            cout<<"Hello I am Function Operator";
        }

};
int main(int argc, char const *argv[])
{
    temp t1;
    t1();
    return 0;
}
