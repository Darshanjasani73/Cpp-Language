#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int arr[6]={23,-5,-90,6,67,90};
    for(int i=0;i<6;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum of all array's element is "<<sum;
    return 0;
}
