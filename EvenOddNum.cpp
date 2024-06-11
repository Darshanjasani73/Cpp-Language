#include<iostream>
using namespace std;

void num(int n)
{
    if(n%2==0)
  {
      cout<<"even"<<endl;
  }
  else
  {

      cout<<"odd"<<endl;
  }
}
int main(){
    int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  num(n);


}
