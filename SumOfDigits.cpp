#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,i;
    cout<<"enter the natural number"<<endl;
    cin>>n;
    while(n>0)
    {

     i = n%10;
     sum+=i;
     n = n/10;

    }
    cout<<"sum of digit"<<sum;
}
