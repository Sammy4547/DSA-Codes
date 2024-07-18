#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter the value of :"<<endl;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    
    return 0;
}
