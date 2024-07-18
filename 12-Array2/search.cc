#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n[5]={12,3,1,24,9};
    int a=-1;
    int x=24;

    for(int i=0;i<5;i++){
        if (n[i]==x)
        {
            a=i; // finding the index of search operation
            break;

        }
     }
     cout<<a;
    return 0;
}
