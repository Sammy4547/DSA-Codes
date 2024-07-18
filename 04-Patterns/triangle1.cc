#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    // i==row , j==coloumn
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
       
    return 0;
}
