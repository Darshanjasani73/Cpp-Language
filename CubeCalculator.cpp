#include<iostream>
#include<math.h>
using namespace std;

void cube(int n)
{
    int ans;
    ans = pow(n,3);
    cout<<ans;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cube(n);

}


