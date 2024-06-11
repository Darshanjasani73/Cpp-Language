#include<iostream>
using namespace std;

int main()
{
   char c;
   cout<<"enter the character"<<endl;
   cin>>c;


   if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='O' || c=='U' || c=='I')
   {
       cout<<"vowel";
   }
   else{
    cout<<"constant";
   }
     return 0;

}
