#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[500],c;
    int j;
    cin>>a;
    sort(a,a+strlen(a));
    c=a[0];
    j=1;
    for(int i=1;i<strlen(a);i++)
    {
        if(a[i]!=c)
        {
            j++;
            c=a[i];
        }
    }
    if(j%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
