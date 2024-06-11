#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int lower,higher,i,temp1,temp2,rem,n=0,ans=0;

    cout<<"enter the two numbers"<<endl;
    cin>>lower;
    cin>>higher;

    cout<<"armstrnog number betwwen"<<lower<<"and"<<higher<<"are"<<endl;
    for(i=lower +1;i < higher;++i)
    {
        temp2 = i;
        temp1 = i;

        while(temp1 != 0)
        {
            temp1 = temp1 / 10;
            ++n;
        }
        while(temp2 != 0)
        {
            rem =  temp2 % 10;
            ans += pow(rem,n);
            temp2 =temp2 / 10;
            if(ans== i)
            {
                cout<<i<<endl;
            }
        }
        n = 0;
        ans = 0;

    }
    return 0;
}
