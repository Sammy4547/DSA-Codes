#include <iostream>
using namespace std;

int isEven(int n)
{
    if (n & 1)
    {
        return 0;   // result is 0 =even number
    }
    return 1;    //result is 1= odd number
}
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
   if( isEven(num))
    {
        cout << "Number is Even";
    }
    else{
     cout<<"Number is odd";
    }
    return 0;
}
