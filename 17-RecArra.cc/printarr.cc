#include <iostream>
using namespace std;


int print(int arr[],int index,int n){
    if(index==-1) return 0;


    cout<<arr[index]<<" ";
     print(arr,index-1,n);

}
int main(int argc, char const *argv[])
{
    int arr[]={2,3,4,6,8};
    print(arr,4,5);
    return 0;
}
