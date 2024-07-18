// Write a code of Prime Number

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int i=2;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"Not a Prime"<<endl;
        }
      
        
        
        i=i+1;
      
        
    }
    
    
    return 0;
}
