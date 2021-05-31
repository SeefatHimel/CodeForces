#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char a[102];
    int i,c=0,d=0;
    cin>>a;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
        {
            c++;
            if(c>=7)
                break;
            d=0;
        }
        if(a[i]=='0')
        {
            d++;
            if(d>=7)
                break;
            c=0;
        }
    }
    if(c>=7 || d>=7)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
