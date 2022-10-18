//Base class Default Constructor,paramiterized constructer in Derived class Constructors

#include<iostream>

using namespace std;

class Base
{ 
 int x;
 public:
 // default constructor
 Base() 
 { x=10;
 cout << "Base default constructor\n"; 
 }
};
class Derived : public Base
{ 
 int y;
 public:
 // default constructor
 Derived() 
 { 
 cout << "Derived default constructor\n"; 
 }
 // parameterized constructor
 Derived(int i) 
 { y=i;
 cout << "Derived parameterized constructor\n"; 
 }
};
int main()
{
 Derived d1; 
 Derived d2(10);
}
