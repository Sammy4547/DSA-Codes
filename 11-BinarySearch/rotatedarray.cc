//Rotated Array
#include <iostream>
using namespace std;
int rotateFind(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        //Right wala part mein jane ke lye
        if (arr[mid] == key)
            return mid;
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= key && key <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // left wala part mein jane ke liye
        else
        {
            if (arr[mid]<=key && key<=arr[end])
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int odd[5]={7,8,1,3,5};
    cout<<"The Final element Index no is :"<<rotateFind(odd,5,1);
    return 0;
}
