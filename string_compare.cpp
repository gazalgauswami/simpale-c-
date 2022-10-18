//check both string are equal or not
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char s1[10];
    char s2[10];

    cout<<"Enter s1: ";
    cin>>s1;

    cout<<"Enter s2: ";
    cin>>s2;

    if(strcmp(s1,s2)==0){
        cout<<"Both are equal";
    }
    else{
        cout<<"Both string are not equal";
    }
    return 0;
}
