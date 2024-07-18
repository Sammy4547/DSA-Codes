#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char sw;
    cout << "enter the value of :" << endl;
    cin >> sw;
    if (sw >= 65 && sw<=90)
    {
        cout << "The alphabet is capital";
    }
    else if (sw >= 90 && sw<=122)
    {
        cout << "The alphabet is small";
    }
    else if(sw>=0 && sw<=65)
    {
        cout << "The value is number";
    }

    return 0;
}
