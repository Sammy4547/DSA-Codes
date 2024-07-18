// Print number 1 to N

#include <iostream>
using namespace std;

void print(int num ,int N)
{
    // Base Case
    if(num==N){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    print(1,N);
}
