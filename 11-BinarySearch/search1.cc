#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start +(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
           return mid;
        }
        // go to right wala part agar key badi hai 
        if(key>arr[mid])
        {
            start=mid+1;
        }
         // go to left wala part agar key choti hai 
        else
        {
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int odd[5]={2,5,6,10,12};
    int even[6]={15,12,10,9,8,5};

    int Index=binarySearch(odd,5,6);
    cout<<"Index is the search is : "<<Index;
    return 0;
}
