//  Sum of all elements in array using recursion
#include <iostream>
using namespace std;

int sum(int arr[],int index,int n)
{
    if(index==n){
        return 0;
    }

    return arr[index] + sum(arr,index+1,n);
}

int main(int argc, char const *argv[])
{
     int arr[]={2,3,4,6,8};
    cout<< sum(arr,0,5);
    
    return 0;
}
