//multilevel inheritances

#include<iostream>

using namespace std;
class A 
{ public : void displayA( ) { cout<<"classA"<<endl ; } 
};
class B : public A
{ public : void displayB( ) { cout<<"classB"<<endl ; }
}; 
class C : public B
{ public : void displayC( ) { cout<<"classC"<<endl ; }
};
int main()
{ C c1;
 c1.displayA();
 c1.displayB();
 c1.displayC();
 return(0);
}
