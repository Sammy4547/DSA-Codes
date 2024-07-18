// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    // start,end,mid
    int start=0, end =n-1 ,mid ,index;

    while(start<=end)
    {
        //Mid ko find karo
         mid=(start+end)/2;

         // arr[mid]==key
        if(arr[mid]==key){
            index= mid;
            break;
        }

        // arr[mid]<key

        else if(arr[mid]<key){
            start=mid+1;
        }

        // arr[mid]>key
        else 
        {
            index=mid;
            end=mid-1;
        }

      
    }
      return index;
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
}
