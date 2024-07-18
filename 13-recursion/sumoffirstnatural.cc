//  Find the sum of first natural number

#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter The number : ";
    cin>>n;
    cout<<sum(n);
    return 0;
}
