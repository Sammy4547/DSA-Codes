#include <iostream>
// #include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter The Value :" << endl;
    cin >> n;
    int i;
    int ans = 0;
    while (n != 0)
    {
        i = n % 10;
        ans = ans * 10 + i;
        n=n/10;
    }
    cout<<"Answer is : "<<ans<<endl;

    return 0;
}
