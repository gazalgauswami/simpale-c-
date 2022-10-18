//perameterized constructer

#include<iostream>

using namespace std;

class construct 
{ 
 int a, b; 
 public:
 // Default Constructor 
 construct() { } 
//parameterized construcotor
construct(int x,int y)
 { 
 a=x;
 b=y;
 } 
 
void putdata() { cout<<a<<":"<<b; }
}; 
 
int main() 
{ 
 // when the object is created 
 construct c(5,10); //parameterized constructor
 cout << "value of a:b " ;
 c.putdata() ;
 return 1; 
}