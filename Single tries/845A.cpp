#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    int a[2*n];
    for(i=0;i<2*n;i++)
    {
      cin>>a[i] ;
    }
    sort(a,a+2*n);
    if(a[n-1]<a[n])
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
