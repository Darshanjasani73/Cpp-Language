#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;


    switch(n % 2)
    {
             case 0:
            cout<<"number is even"<<endl;
            break;
             case 1:
            cout<<"number is odd"<<endl;
            break;


    }
}
