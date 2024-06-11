#include<iostream>
using namespace std;

int main()
{
    int n,e,ans;
    cout<<"enter the base and exponent"<<endl;
    cin>>n>>e;
    for(ans=1;e>0;e--)
    {
        ans *= n;

    }
    cout<<"ans is"<<ans;
}
