#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "enter the value of A:" << endl;
    cin >> a;
    if (a>0)
    {
        cout<<"A is Positive";
    }
    else if (a<0)
    {
      cout<<"A is negative";
    }
    else
    {
        cout<<"A is 0";
    }
    
    

    return 0;
}
