#include <iostream>
using namespace std;

int fact(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto = facto * i;
    }
    return facto;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << "factorial is : " << ans << endl;
    return 0;
}
