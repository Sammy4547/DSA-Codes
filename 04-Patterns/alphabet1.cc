
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch= 'A'+ i - 1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}

// Find Pattern like this 
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
