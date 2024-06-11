#include<iostream>
#include<math.h>
using namespace std;

int Reverse(int n)
{

    int k = (int)log10(n);
    if(n==0)
    {
        return 0;
    }

    return ((n%10 * pow(10,k)+ Reverse(n/10)));
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<Reverse(n);
    return 0;
}

