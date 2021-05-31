#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    string a;
    int n;
    cin>>a;
    n=a.size();
    n=a[n-1]-48+(a[n-2]-48)*10;
    if(n%4==0)
        printf("4\n");
    else
        printf("0\n");
}
