// function overloading

#include <iostream>

using namespace std;

void temp()
{
    cout << "\n i am messege";
}
void temp(int x)
{

    cout << "\n I am intger: " << x;
}
void temp(char a)
{
    cout << "\n I am Character: " << a;
}
/*this function is not allow
int temp()
{
    return (5);
}
*/
int main(int argc, char const *argv[])
{
    temp();
    temp(10);
    temp('g');
    // int k=temp();
    // cout<<"\n"<<k;
    return 0;
}
