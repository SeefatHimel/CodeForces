#include<iostream>
using namespace std;
main()
{
    int n,i,m=0;
    cin>>n;
    //cout<<n;
    int a[n+1],b[n+1],c[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        //cout<<i<<"\n";
        if(i==0)
            c[i]=b[i]-a[i];
        else
            c[i]=c[i-1]+b[i]-a[i];
        if(c[i]>m)
            m=c[i];
    }
    cout<<m<<"\n";

}
