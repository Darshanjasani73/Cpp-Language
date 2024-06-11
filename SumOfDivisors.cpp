#include<iostream>
using namespace std;

void Pnum(int n1,int n2)
{
   int i,j,k,s,ans,n;
   for(i=n1;i<=n2;i++)
   {
       s=i;
       n=i;
      for(j=1;j<=n;j++)
      {
          while(s % j != 0)
          {
              ans = ans + j;
              cout<<ans<<"\n";
              break;
          }
      }
   }




}
int main()
{
    int a,b;
    cout<<"enter the 2 numbers"<<endl;
    cin>>a>>b;
    Pnum(a,b);
    return 0;
}
