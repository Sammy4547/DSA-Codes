#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<" Prime number";
    }
    else
    {
        cout<<" Not a Prime Number";
    }
    return 0;
}
