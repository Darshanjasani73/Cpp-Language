#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,i,j,k=0,m,ans=0,p=1,c=0;
    cout<<"enter the number"<<endl;n;
    cin>>n;
    j  = n;
    m = n;

    while(j>0)
    {
        j = j / 10;
        c++;
    }
    c--;


    while(m>0)
    {
        i = m % 10;
        p = i * pow(10,c);
        ans += p;
        m = m / 10;
        c--;
    }

    cout<<"ans is:"<<ans<<endl;
    if(ans == n)
    {
        cout<<"number is pelindrome"<<endl;
    }
    else
    {
         cout<<"number is  not  pelindrome"<<endl;
    }
     return 0;
}


