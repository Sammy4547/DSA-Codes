// In this program learn about Binary to decimal
// For ex n=5 in binary 5=101
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
  
    while(n!=0)
    {
      int bit = n & 1;
      ans=(bit * pow(10 ,i)) +ans;
      n=n >> 1;
      i++;
    }
    cout<<"Answer is : "<< ans <<endl;
    // return 0;
}
