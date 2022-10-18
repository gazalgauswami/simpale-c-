//increment and descrement operator using uniary operator

#include<iostream>

using namespace std;

class temp{
    int a,b;
    public:
        void getdata(int x, int y){
            a=x;
            b=y;
        }    
        void putdata(){
            cout<<a;
            cout<<b;
        }
        void operator++(){
            a++;
        }
        void operator--(){
            b--;
        }
};
int main(int argc, char const *argv[])
{
    temp t1;
    int x,y;
    cout<<"Enter the value: ";
    cin>>x>>y;
    t1.getdata(x,y);
    t1.putdata();
    ++t1;
    --t1;
    t1.putdata();
    return 0;
}




