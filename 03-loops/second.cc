#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    // int t;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<endl;

    return 0;
}
