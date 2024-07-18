#include <iostream>
using namespace std;
int findSum(int a[],int n)
{
    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int a[10]={1,5,3,4,8,12,45,32,21,49};
    //  int n;
    // cin >> n;
    // int a[100];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    int total=findSum(a,10);
    cout<<"Total Sum is :"<<total;
    return 0;
}
