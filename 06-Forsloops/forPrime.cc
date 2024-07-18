#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter The value : " << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout << "Not a Prime";
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Not A Prime";
    }
    else
    {
        cout << "Prime NUmber";
    }

    return 0;
}
