#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter the amount : ";
    cin >> a;
    int deno = 100;
    int count = 0;
    while (a > 0 && deno >= 10)
    {

        switch (deno)
        {
        case 100:
            count = a / 100;
            if (count > 0)
            {
                cout <<"100Rs notes :"<<count<<endl;
                a=a%100;
            }
             deno=50;
            break;
        case 50:
             count =a/50;
             if(count>0)
             {
                cout<<"50rs notes :"<<count<<endl;
                a=a%50;
             }
             deno =20;
            break;
        case 20:
             count =a/20;
             if(count>0)
             {
                cout<<"20 rs notes :"<<count<<endl;
                a=a%20;
             }
             deno =10;
            break;
        case 10:
            count=a/10;
            if(count>0){
                cout<<"10 rs notes :"<<count<<endl;
                a=a%10;
            }
            deno=0;
            break;
        default:
            cout << "please enter valid number " << endl;
        }
    }
    return 0;
}
