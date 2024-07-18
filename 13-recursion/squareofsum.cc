// Find the sum of square of N number

#include <iostream>
using namespace std;

int sqsum(int n){
    if(n==1){
        return 1;
    }

    return n*n + sqsum(n-1);
}
int main(int argc, char const *argv[])
{
     int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<sqsum(n);
    return 0;
}
