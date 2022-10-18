//uniary opreatoe overloading in member function

#include<iostream>

using namespace std;

class temp
{
    int n;
    public:
        void getdata()
        {
            cout<<"Enter Value: ";
            cin>>n;
        }
        void putdata()
        {
            cout<<"value: "<<n;
        }
        void operator -()
        {
            n=-n;
        }
};
int main(int argc, char const *argv[])
{
    temp t1;
    t1.getdata();
    -t1;
    t1.putdata();

    return 0;
}
