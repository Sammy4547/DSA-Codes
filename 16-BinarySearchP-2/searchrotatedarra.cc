//Search Element in a Rotated Sorted Array
// Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k. Now the array is rotated at some pivot point unknown to you. Find the index at which k is present and if k is not present return -1.

// Example 1:
// Input Format: arr = [4,5,6,7,0,1,2,3], k = 0
// Result: 4
// Explanation: Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

// Example 2:
// Input Format: arr = [4,5,6,7,0,1,2], k = 3
// Result: -1
// Explanation: Here, the target is 3. Since 3 is not present in the given rotated sorted array. Thus, we get the output as -1.



#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    // start,end,mid
    int start=0, end =n-1 ,mid;

    while(start<=end)
    {
        //Mid ko find karo
         mid=(start+end)/2;

         // arr[mid]==key
        if(arr[mid]==key){
            return mid;
            break;
        }

       // left-part Sorted
        else if(arr[mid]>arr[0]){
            if(arr[start]<=key&&arr[mid]>=key)  
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }

        else 
        {
            if(arr[mid]<=key&&arr[end]>=key)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }

      
    }
      return -1;
}


int main(int argc, char const *argv[])

{
    int arr[1000];
    
    int n;
    cout<<"Enter the number element array  :";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key :";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;


    return 0;
}


