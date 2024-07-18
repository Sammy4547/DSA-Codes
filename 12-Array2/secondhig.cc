#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[6]={12,3,4,6,13,10};
     int ans = INT8_MIN;

    // largest element
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    // second largest
   int second=INT8_MIN;
    for(int i=0;i<6;i++){
        if (arr[i]!=ans)
        {
            ans=max(ans,arr[i]);
        }
        

    }
    cout<<ans<<endl;
    



    return 0;
}
