// A scope is a region of the program and broadly speaking there are three places, where variables can be declared −

// Inside a function or a block which is called local variables,

// In the definition of function parameters which is called formal parameters.

// Outside of all functions which is called global variables.

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=4;
    cout<<a<<endl;
    if(true)
    {
        int a =5;
        cout<<a<<endl;
    }
    cout<<a<<endl;
    return 0;
}
