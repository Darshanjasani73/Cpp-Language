#include<iostream>
using namespace std;

int EvenOddnum(int n1,int n2)
{
    if(n1==n2)
    {
        if(n2%2==0)
        {
            cout<<n2<<": even number"<<endl;
            return 1;
        }
        else
        {
             cout<<n2<<": odd number"<<endl;
             return 1;
        }
    }
    if(n1%2!=0)
    {
        cout<<n1<<": odd number"<<endl;
        EvenOddnum(n1+1,n2);
    }
    if(n1%2==0)
    {
        cout<<n1<<": even number"<<endl;
        EvenOddnum(n1+1,n2);
    }

}
int main()
{
    int n1,n2;
    cout<<"enter the numbers"<<endl;
    cin>>n1>>n2;
    EvenOddnum(n1,n2);
    return 0;
}
