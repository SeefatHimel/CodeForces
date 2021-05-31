#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n+1],i,sum=0,osum=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        sum-=a[i];
        osum+=a[i];
        if(osum<=sum)
            c++;
        else if(osum>sum)
        {
            c++;
            break;
        }
    }
    cout<<c<<endl;
}
