#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int s=0,f=0,l;
    string a;
    cin>>a;
    l=a.size();
    for(int i=0;i<l;i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            f=i;
            for(int j=s;j<f;j++)
                printf("%c",a[j]);
            if(f-s>0)
                printf(" ");
            i+=2;
            s=i+1;
        }
    }
        for(int j=s;j<l;j++)
                printf("%c",a[j]);
}
