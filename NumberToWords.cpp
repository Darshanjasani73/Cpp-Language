#include<iostream>
using namespace std;
int main()
{
    int n,num = 0;
    cout<<"enter the number:"<<endl;
    cin>>n;


    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n = n / 10;
    }

    while(num != 0)
    {

        switch(num % 10)
        {

        case 0:
            cout<<"zero"<<endl;
            break;
        case 1:
            cout<<"one"<<endl;
            break;
        case 2:
            cout<<"two"<<endl;
            break;
        case 3:
            cout<<"three"<<endl;
            break;
        case 4:
            cout<<"four"<<endl;
            break;
        case 5:
            cout<<"five"<<endl;
            break;
        case 6:
            cout<<"six"<<endl;
            break;
        case 7:
            cout<<"seven"<<endl;
            break;
        case 8:
            cout<<"eight"<<endl;
            break;
        case 9:
            cout<<"nine"<<endl;
            break;
        }
        num = num / 10;
    }
    return 0;
}
