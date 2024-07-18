#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans=ans^x;
    }
    cout<<"The ans is :"<<ans;
    return 0;
}
