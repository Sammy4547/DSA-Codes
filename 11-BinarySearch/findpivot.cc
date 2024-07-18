#include <iostream>
using namespace std;

int findPivot(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if(arr[mid]>arr[0]){ // Right Part mein Jaunga
            s=mid+1;
        }
        else{    // Left Part mein Jaunga
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(int argc, char const *argv[])
{
    int pivo[5]={2,3,1,4,3};
    cout<<"Pivot element index no is : "<<findPivot(pivo,5,1);
    return 0;
}
