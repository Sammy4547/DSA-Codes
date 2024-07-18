#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << "Inside the function" << endl;
    // Update the Array
    arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout << "going Back to the Function" << endl;
}
int main(int argc, char const *argv[])
{
    int arr[3]={2,4,8};
     update(arr,3);
    return 0;
}
