#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    string a,b;
    cin>>a>>b;
    reverse(b.begin(),b.end());
    if(a==b)
        printf("YES\n");
    else
        printf("NO\n");
}
