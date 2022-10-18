///parameterised constructor in single inheritance
#include<iostream>

using namespace std;

class A
{ int a;
public :
 A(int x) { a=x; }
 void putA() { cout<<a; }
};
class B: public A
{ int b;
public :
 B(int x,int y):A(y)
 {
 b=x;
 }
 void putB() { cout<<b; }
};
int main()
{ 
 B b1(2,3);
 b1.putA();
 b1.putB();
return(0);
}