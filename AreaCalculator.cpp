#include<iostream>
#define pi   3.14

using namespace std;

int main()
{
    int r,l,b;
    float C_area,R_area,T_area;

    cout<<"enter the r,l,b;"<<endl;
    cin>>r>>l>>b;

    C_area = pi * r * r;
    R_area = l*l;
    T_area = 0.5 * l * b;

    cout<<C_area<<endl<<R_area<<endl<<T_area;

}
