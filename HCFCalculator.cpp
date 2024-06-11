#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n1,n2,i;

    cout<<"enter the two number"<<endl;
    cin>>n1>>n2;

    if(n1>n2)
    {
        i = n1 % n2;
        if(n2 % i == 0)
        {
            cout<<" HCF of "<<n1<<" and "<<n2<<"is"<<i<<endl;
        }
        else{
            cout<<"can't find HCF of n1 and n2"<<endl;
        }
    }
    else
    {
         i = n2 % n1;
        if(n1 % i == 0)
        {
            cout<<" HCF of "<<n1<<" and "<<n2<<"is"<<i<<endl;
        }
        else{
            cout<<"can't find HCF of n1 and n2"<<endl;
        }
    }


       return 0;
    }

