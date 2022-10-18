//simpale distructer

#include<iostream>

using namespace std;
int cnt=0;
class A{
    protected:
    int a;
    public:
        A()
        {
            cout<<"\n constructer "<<cnt;
            cnt++;
        }
        ~A()
        {
            cout<<"\n Destructer "<<cnt;
            cnt--;
        }
};
int main(int argc, char const *argv[])
{
    A a1,a2;
    {
        A a3;
    }
    return 0;
}
