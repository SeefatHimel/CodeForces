#include<iostream>
#include<bits/stdc++.h>
bool grt(int i,int j)
{
    return (i>j);
}
using namespace std;
main()
{
    string a,b;
    char i,j;
    cin>>a>>b;
    sort(b.begin(),b.end(),grt);
    for( i=0, j=0;i<a.size()&&j<b.size();)
    {
        if(b[j]=='0')
            break;
        if(a[i]<b[j])
        {
            a[i]=b[j];
            i++;
            j++;
        }
        else
            i++;
    }
    cout<<a<<endl;
}
