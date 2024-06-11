#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n > 2)
    {
        if(n % 2 == 0)
        {
            cout<<"number is notprime number";
        }
        else
        {
            cout<<" number is prime_number"<<endl;
        }
     }

    else
    {
        cout<<"2 is prime number"<<endl;
    }

}
