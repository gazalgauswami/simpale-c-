//singale inheritances

#include<iostream>

using namespace std;

class A 
{ public : void displayA( ) { cout<<"base"<<endl ; } 
};
class B : public A
{ public : void displayB( ) { cout<<"derived" ; }
};
int main()
{ B b1;
 b1.displayA();
 b1.displayB();
 return(0);
}