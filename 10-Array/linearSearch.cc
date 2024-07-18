#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 15, 63, 9, 2, 3, 45, 78, 12, 4};
    cout << "Enter the element search :";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is Present";
    }
    else
    {
        cout << "Key is not Present";
    }
    return 0;
}
