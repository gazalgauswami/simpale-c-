//hirachical inheritances

#include<iostream>

using namespace std;

class A 
{ public : void displayA( ) { cout<<"classA"<<endl ; } 
};
class B : public A
{ public : void displayB( ) { cout<<"classB"<<endl ; }
}; 
class C : public A
{ public : void displayC( ) { cout<<"classC"<<endl ; }
};
class D: public A
{ public : void displayD( ) { cout<<"classD" ; }
}; 
int main()
{ B b1;
 C c1;
 D d1;
 b1.displayA();
 c1.displayA();
 d1.displayA();
 b1.displayB( ) ;
 c1.displayC( ) ;
 d1.displayD( ) ;
 return (0);
}
