#include <iostream>
using namespace std;
void printArray(int arr[],int size)
{
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing is done "<<endl;
}
int main(int argc, char const *argv[])
{
    //initliasing array
    int first[]={5,7,11};
    cout<<"Value of 2 index is : "<<first[2]<<endl;

    // Access the Array
    int second[15]={2,7,8,9,15};
    int n=15;

    // With help of the For loop You can Acess the Array
    printArray(second,15);
    cout<<"this is after "<<endl;
    // Initliasing all locations using 0

    int third[7]={0};
    int n1=7;
    printArray(third,7);

    // How to Find Size of Array so using sizeof() functions
    int fourth[5]={0};
    int sizekya= sizeof(fourth)/sizeof(int);
    cout<<"The size is : "<<sizekya;
    return 0;
}

