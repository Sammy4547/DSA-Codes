#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter the first Number : "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the Second Number : "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation : "<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<"The Answer is :"<<(a+b)<<endl;
                  break;
        case '-':  cout<<"The Answer is :"<<(a-b)<<endl;
                   break;
        case '*':  cout<<"The Answer is :"<<(a*b)<<endl;
                   break;
        case '/':  cout<<"The Answer is :"<<(a/b)<<endl;
                   break;
        case '%':  cout<<"The Answer is :"<<(a%b)<<endl;
                break;
        default : cout<<"The Answer is :"<<"Please enter the valid operation"<<endl;
    }
    return 0;
}
