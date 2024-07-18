#include <iostream>
using namespace std;

int FirstOcc(int arr[],int n,int key){

    int start=0 ,end=n-1 ,first=-1,last=-1 ,mid;

    //Find First
    while (start<=end)
    {
        mid=start+(end-start)/2;

        if (arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }
        else if (arr[mid]<=key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }

    // last element
      while (start<=end)
    {
        mid=start+(end-start)/2;

        if (arr[mid]==key)
        {
            last=mid;
            start=mid+1;
        }
        else if (arr[mid]<=key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }

   return first ,last;
    

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
    cout<<FirstOcc(arr,n,key);
    
    return 0;
}
