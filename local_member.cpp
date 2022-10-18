//local member in class

#include<iostream>

using namespace std;

class temp
{
private:
    int a,b;
public:
    void sum()
    {
        a=5;
        b=10;
        int c=a+b;

        cout<<"The sum is: "<<c;
    }
    
};
int main(int argc, char const *argv[])
{
    temp t1;
    t1.sum();
    return 0;
}



    
