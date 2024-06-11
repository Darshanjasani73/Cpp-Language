#include<iostream>
using namespace std;

int main()

{
    int a,b,n;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    n = a>b?a:b;

    switch(n)
    {
       case 55:
        cout<<"max"<<a<<endl;
        break;
        case 12:
        cout<<"max"<<b<<endl;
        break;
    }


}
