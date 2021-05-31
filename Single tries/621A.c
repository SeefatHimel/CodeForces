#include<stdio.h>
main()
{
    long long int x,n,i,s=0,j=10000000000;
    scanf("%lld",&x);
    long long int a[x+1];
    for(i=0;i<x;i++)
    {
        scanf("%lld",&a[i]);
        s=s+a[i];
        if(a[i]%2!=0&&a[i]<j)
            j=a[i];
    }
    if(s%2!=0)
    {
    s-=j;
    }

    printf("%lld\n",s);
}
