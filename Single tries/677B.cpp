#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
main()
{
    int n,h,k,tt=0,p,j,rest,t=0;
    cin>>n>>h>>k;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0)
        {
            j=i-1;
           // printf("tt+a[j] %d \n",tt+a[j]);
            if(tt+a[j]<=h)
            {
                t+=(tt+a[j])/k;
                tt=(tt+a[j])%k;
            }
            else
            {
                t++;
                t+=a[j]/k;
                tt=a[j]%k;
            }
            //printf("a[j] %d tt %d t%d\n",a[j],tt,t);
        }
    }
    j=n-1;
    if(tt+a[j]<=h)
    {
        t+=(tt+a[j])/k;
        tt=(tt+a[j])%k;
    }
    else
    {
        t++;
        t+=a[j]/k;
        tt=a[j]%k;
    }
    if(tt>0)
        t++;
    cout<<t<<endl;
}
