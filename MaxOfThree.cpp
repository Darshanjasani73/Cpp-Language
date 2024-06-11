#include<iostream>
using namespace std;

int main()

{
    int a,b,c,maximum;
    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;

    maximum = a>b ? (a>c ? a:c) : (b>c ? b:c);

    cout<<"maximum is"<<maximum;



}
