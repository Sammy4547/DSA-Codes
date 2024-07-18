#include <iostream>
using namespace std;

int power (){  // function initilazed
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int ans =power();  // function Call
    cout<<"Answer is :"<<ans<<endl;

    
    return 0;
}
