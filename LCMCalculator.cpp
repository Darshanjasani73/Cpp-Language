#include<iostream>
using namespace std;
int main()
{
   int n1,n2,lcm;
   cout<<"enter the two number"<<endl;
   cin>>n1>>n2;

   if(n1>n2)
   {
       lcm = n1;
   }
   else
   {
       lcm = n2;
   }

   while(1)
   {
       if(lcm % n1 == 0 && lcm % n2 == 0)
       {
           cout<<"the lcm of "<<n1<<" and "<<n2<<" is "<<lcm<<endl;
           break;
       }
       lcm++;
   }
   return 0;
}
