//recursion function for do fectorial of n number

#include<iostream>

using namespace std;

int fecto(int n){
    if (n==1){
        return(n);
    }
    else{
        return(n*fecto(n-1));
    }

}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fecto(n);
    return 0;
}
