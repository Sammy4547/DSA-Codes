// Power of 2 

#include <iostream>
using namespace std;

int pow(int num ,int n)
{
    if(n==1)
    {
        return num;
    }
    return num*pow(num,n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<pow(2,n);
    return 0;
}
