#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5]={2,7,4,9,10};
    int b[5]={7,4,9,15,12};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}
