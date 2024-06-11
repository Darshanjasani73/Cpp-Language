#include<iostream>
#include<math.h>
using  namespace std;

int main()
{
    int angleA,angleB,angleC;
    cout<<"enter 3 angle"<<endl;
    cin>>angleA>>angleB>>angleC;

    if(angleA==angleB)
    {
        cout<<"equilateral triangle"<<endl;
    }
    else if(sqrt(angleA)==sqrt((angleB)+(angleC)))
    {
    cout<<"pythagorean triangle"<<endl;
    }
    else{
        cout<<"there is  not triangle";
    }
}
