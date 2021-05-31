#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,a[55],d,s;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    sort(a,a+m);
    for(int i=0;i<=m-n;i++)
    {
        d=a[n-1+i]-a[i];
        if(i==0)
            s=d;
        else if(d<s)
            s=d;
    }
    printf("%d\n",s);
}
