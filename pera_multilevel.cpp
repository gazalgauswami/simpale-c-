//parameterized constructor in multilevel inheritance
#include<iostream>

using namespace std;

class A
{ int a;
public :
 A(int x)
 { a=x; }
 void putA() { cout<<a; }
};
class B : public A
{ int b;
public :
 B(int x,int y):A(x)
 {
 b=y;
 }
 void putB() { cout<<b; }
};
class C : public B
{ int c;
public :
 C(int x,int y,int z):B(x,y)
 {
 c=z;
 }
 void putC() { cout<<c; }
};
int main()
{ 
 C c1(1,2,3);
 c1.putA();
 c1.putB();
 c1.putC();
return(0);
}