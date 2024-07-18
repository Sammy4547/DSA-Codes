#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=4,b=6;
    a=a^b;
    b=b^a;

    a=a^b;

    cout<<a <<" "<<b;
    return 0;
}
