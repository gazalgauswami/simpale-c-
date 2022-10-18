//multipal inheritances

#include<iostream>

using namespace std;

class A 
{ public : void displayA( ) { cout<<"classA"<<endl ; } 
};
class B
{ public : void displayB( ) { cout<<"classB"<<endl ; }
}; 
class C : public A , public B
{ public : void displayC( ) { cout<<"classC" ; }
};
int main()
{ C c1;
 c1.displayA();
 c1.displayB();
 c1.displayC();
 return(0);
}
