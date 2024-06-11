#include<iostream>
using namespace std;

int main()
{
    int year,ans,Lyear,Byear;
    cout<<"enter the year"<<endl;
    cin>>year;

    (year % 4 == 0)? cout<<"leap year" : cout<<"bin leap year";

    return 0;


}
