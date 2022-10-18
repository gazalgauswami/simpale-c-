//recursion function for do sum of n number

#include<iostream>

using namespace std;

int sum(int n){
    if (n==1){
        return(n);
    }
    else{
        return(n+sum(n-1));
    }

}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    sum(n);
    cout<<sum(n);
    return 0;
}
