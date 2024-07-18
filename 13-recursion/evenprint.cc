// Print number 1 to N (even number)
 

#include <iostream>
using namespace std;

void print(int num ,int N)
{
    // Base Case
     if(num>N)
    {
        return;
    }
    
    cout<<num<<endl;
    print(num+2,N);
}
int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    print(2,N);
}
