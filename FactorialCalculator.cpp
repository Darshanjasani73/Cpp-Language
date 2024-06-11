#include<iostream>
using namespace std;

int main()
{
    int n,fact;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(fact=1;n>0;n--)
    {
        fact *=n;
    }
    cout<<"fact of given number is"<<fact;

}
