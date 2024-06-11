// call by reference.
#include<iostream>
using namespace std;


void swapPointer(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a=65,b=9;
    swapPointer(&a,&b);
    cout<<a<<"\n"<<b;
    return 0;
}
