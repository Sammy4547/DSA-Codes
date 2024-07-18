#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int n;
    cout<<"Enter the num "<<endl;
    cin>>n;
    int arr[]={2,3,4,56,6};
    arr[0]=10;
    arr[5]=20;
    
   for(int i=0;i<n;i++){
       cout<<arr[i]<<endl;
   }

    return 0;
}