#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c=0,d=0,z=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        if(b==1)
        {
            d=1;
            c+=z*2;
            z=0;
        }
        if(d==1&&b==0)
            z++;
    }
    if(d==1&&c==0)c++;
    cout<<c<<endl;
}
