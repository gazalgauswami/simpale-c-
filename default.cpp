// defualt constructer

#include<iostream>

using namespace std;

class construct 
{ 
 int a, b; 
 public:
 // Default Constructor 
 construct() 
 { 
 a = 10; 
 b = 20; 
 } 
void putdata() { cout<<a<<":"<<b; }
}; 
 
int main() 
{ 
 // Default constructor called automatically 
 // when the object is created 
 construct c; 
 cout << "value of a:b " ;
 c.putdata() ;
 return 1; 
}