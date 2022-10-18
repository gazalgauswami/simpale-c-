//string method

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main () {

   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   //reverse string
   // cout<<"strrev(str1): " <<strrev(str1);

   //compare two string
   cout<<"strcmp(str1,str2): "<<strcmp(str1,str2);

   return 0;
}
