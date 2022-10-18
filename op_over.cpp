//operator overloading

#include<iostream>

using namespace std;

class temp
{
   
    int t;
    public:
    void get(){
        cout<<"Enter Value: ";
        cin>>t;
    }
    void operator-(){
        t=-t;
    };
    void put(){
        cout<<"Value: "<<t;
    }
};

int main(int argc, char const *argv[])
{
    temp t1;
    t1.get();
    t1.put();
    -t1;
    t1.put();
    return 0;
}
