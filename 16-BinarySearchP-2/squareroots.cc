#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int x)
{
    
        int start=0 ,end=x,ans,mid;
        
        while(start<=end){
            mid=start+(end-start)/2;

            if(mid==x/mid){
                ans=mid;
                break;
            }

            else if(mid<x/mid){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        return ans;
    
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

    int x;
    cout<<"Enter the key :";
    cin>>x;

    cout<<BinarySearch(arr,n,x);
    return 0;


    return 0;
}
