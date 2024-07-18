/*
& - And operators
| - Or operators
~ - Nor operators
^ - XOr operators
        */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 4, b = 6;
    cout << "a&b : " << (a & b) << endl;
    cout << "a|b : " << (a | b) << endl;
    cout << "~a :" << ~a << endl;
    cout << "a^b : " << (a ^ b) << endl;

    // Bitwise Shift  Operator 1. <<-left shift 2. >> - Right Shift
    cout << (17 >> 1) << endl;
     cout << (17 >> 2) << endl;
     cout << (18 << 1) << endl;
      cout << (18 << 2) << endl;


    return 0;
}
