#include<iostream>
#include<math.h>
using namespace std;

int power(int n,int p)
{
    int Prepow = pow(n,(p-1));
    return n * Prepow;
}

int main()
{
    int n,p;
    cout<<"enter the value of n and p"<<endl;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}
