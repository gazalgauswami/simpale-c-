//copy constructer

#include<iostream>

using namespace std;
class Point 
{ 
private: 
 int x, y; 
public: 
 Point(int x1, int y1) { x = x1; y = y1; } 
 
 // Copy constructor 
 Point( Point &p1) 
{ x = p1.x;
y = p1.y;
 } 
void putdata() { cout<<x<<y; }
 
}; 
 
int main() 
{ 
 Point p1(10, 15); // Parameterized constructor is called here 
 Point p2(p1); // Copy constructor is called here 
 p1.putdata();
 p2.putdata();

 return 0;
}