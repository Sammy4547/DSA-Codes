#include <iostream>
using namespace std;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<endl;
}
void findNum(int a[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(a[i], a[i + 1]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int a[5] = {2, 5, 4, 9, 10};
    int b[6] = {1, 23, 45, 65, 78, 10};
    findNum(a, 5);
    printArray(a, 5);
    findNum(b,6);
    printArray(b,6);

        return 0;
}
