#include <iostream>
using namespace std;

void fun3(int n){
    if (n==0)
    {
        cout<<"Happy Birthday \n";
        return;
    }

    cout<<n<<" "<<"days to left birthday \n";
    fun3(n-1);
    
}

int main(int argc, char const *argv[])
{
    fun3(5);
}
