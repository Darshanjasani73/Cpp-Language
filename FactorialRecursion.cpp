#include<iostream>
using namespace std;

int fact(int n)
{
    int Nfact=1;
    if(n==1)
    {
        return 1;
    }
    for(int i=1;i<=(n-1);i++)
    {
        Nfact = Nfact * i;
    }

    return n * Nfact;
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}
