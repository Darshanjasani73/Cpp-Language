#include<iostream>
#include<math.h>
using namespace std;

void asNum(int n)
{

    int a,i,j,m,s,ans;
    i = n;
    a = log10(n);
    a++;

    while(n>0)
    {
        m = n % 10;
        s = pow(m,a);
        ans += s;
        n = n / 10;
    }
    if(ans==i)
    {
        cout<<"number is armstrong"<<endl;
    }
    else
    {
        cout<<"number is not armstrong"<<endl;
    }

}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    asNum(n);

}
