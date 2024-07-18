#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    // i==row , j==coloumn
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
       
    return 0;
}
