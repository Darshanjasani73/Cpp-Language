#include<iostream>
using namespace std;

int main()
{
  int i,n;
  int rev;
  cout<<"enter the number"<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
      cout<<i<<endl;
  }
  for(rev=n;rev>=1;rev--)
  {
      cout<<rev<<endl;
  }
  return 0;
}
