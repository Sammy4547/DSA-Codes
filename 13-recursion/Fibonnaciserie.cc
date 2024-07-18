// In this Practical write Fibonnaci series


#include <iostream>
using namespace std;

int fib(int n){
  
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main(int argc, char const *argv[])
{
   
     int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<fib(n);
    return 0;
}
