#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5]={10,3,7,2,1};

    for(int i=0;i<4;i++){

       for(int j=0;j<4-i;j++){

        if(a[j+1]<a[j]){
            swap(a[j],a[j+1]);
        }
       }

    }
    for (int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }
    
    return 0;
}
