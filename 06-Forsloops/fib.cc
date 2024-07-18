#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=10;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <=n ; i++)
    {
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }

    

    return 0;
}
