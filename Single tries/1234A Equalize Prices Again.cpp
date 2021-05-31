#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t,n,sum,m,v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n;
        sum=0;
        while(m--)
        {
           cin>>v;
           sum+=v;
        }
        sum = ceil(sum*1.00/n);
        cout<<sum<<endl;

    }

    return 0;
}


