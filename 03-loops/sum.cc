// Find the sum of all even number

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 2;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }

    cout << "value is : " << sum << endl;

    return 0;
}
