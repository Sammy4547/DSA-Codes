#include <iostream>
using namespace std;
int binarySearch(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
            return mid;
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int mySqrt(int x)
{
    return binarySearch(x);
}
double morePrecision(int n, int presicison, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < presicison; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;
    int temp = mySqrt(n);
    cout << "answer is :" << morePrecision(n, 3, temp);
}
