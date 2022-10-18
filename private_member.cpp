//access a private member of class

#include<iostream>

using namespace std;

class check{
    int a;
    public:
    int b;
    void sum(){
        a=5;
        b=10;
        cout<<"The sum is: "<<a+b;
    }
};
int main(int argc, char const *argv[])
{
    check c1;
    c1.sum();
    return 0;
}
