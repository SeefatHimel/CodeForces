#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char a[102],b[102];
    int i,c;
    cin>>a>>b;
    c=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
        if(b[i]>='A'&&b[i]<='Z')
            b[i]=b[i]+32;
        if(a[i]>b[i])
        {
            c=1;
            break;
        }
        if(a[i]<b[i])
        {
            c=-1;
            break;
        }
    }
    cout<<c<<"\n";
}
