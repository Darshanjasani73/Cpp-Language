#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevfact = fact(n-1);
    return n * prevfact;
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}

