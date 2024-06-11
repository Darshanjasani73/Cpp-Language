
#include <iostream>
using namespace std;


int Findhcf(int x, int y)
{
    if(y == 0)
        return x;
    else
        return Findhcf(y, x%y);
}


int main()
{
    int num1, num2, hcf;


    cout<<"Enter any 2 numbers to find  hcf: "<<endl;
    cin>>num1;
    cin>>num2;

    hcf = Findhcf(num1, num2);
    cout<<hcf;
    return 0;
}

