#include <iostream>
using namespace std;

int firstOcc(int arr[] ,int n,int key)
{
   int s=0;
   int e=n-1;
   int mid = s+(e-s)/2;
   int ans=-1;
   while(s<=e)
   {
    if(arr[mid]==key)
    {
       ans=mid;
       e=mid-1; 
    }
    else if(key > arr[mid])  // right wale part mein jaun
    {
       s=mid+1;
    }
    else if(key<arr[mid])  // left wale part mein jao
    {
        e=mid-1;
    }
      mid= s +(e-s)/2;
   }
   return ans;
}
int lastOcc(int arr[] ,int n,int key)
{
   int s=0;
   int e=n-1;
   int mid = s+(e-s)/2;
   int ans=-1;
   while(s<=e)
   {
    if(arr[mid]==key)
    {
       ans=mid;
       s=mid+1; 
    }
    else if(key > arr[mid])  // right wale part mein jaun
    {
       s=mid+1;
    }
    else if(key<arr[mid])  // left wale part mein jao
    {
        e=mid-1;
    }
      mid= s +(e-s)/2;
   }
   return ans;
}
int main(int argc, char const *argv[])
{
   int even[5]={1,2,3,3,5};
   cout<<"First Occuerence of 3 is : "<<firstOcc(even,5,3)<<endl;
   cout<<"Second Occurence of 3 is :"<<lastOcc(even,5,3);
   return 0;
}
