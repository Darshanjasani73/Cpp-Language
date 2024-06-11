#include<iostream>
using namespace std;

int main()
{
    int n,a,b;

    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"enter the number(1-5) "<<endl;
    cin>>n;
    switch(n)
    {
              case 1:
             cout<<"addition of a and b is "<<a+b<<endl;
             break;
              case 2:
             cout<<"substraction of a and b is "<<a-b<<endl;
             break;
              case 3:
             cout<<"multification of a and b is "<<a*b<<endl;
             break;
              case 4:
             cout<<"division of a and b is "<<a/b<<endl;
             break;
              case 5:
             cout<<"mode of of a and b is "<<a%b<<endl;
             break;




    }
}
