// Find the code of the Factorial
#include <iostream>
using namespace std;

int print(int n)
{
    if(n==1 || n==0) 
    {
        return 1;
    }
    return n*print(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter The number : ";
    cin>>n;
    cout<<print(n);
}
