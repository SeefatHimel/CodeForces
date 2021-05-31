#include<iostream>
#include<string.h>
using namespace std;
main()
{
    int i,c=1;
    char a[105];
    cin>>a;
    if(a[0]>='A'&&a[0]<='Z')
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>='A'&& a[i]<='Z')
                c=0;
            else
            {
                c=1;
                break;
            }
        }
    }
    else if(a[0]>='a'&&a[0]<='z')
        c=0;
        i=strlen(a);
    for(i=0;i<strlen(a);i++)
    {
        if(c==0)
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]+=32;
            else if(a[i]>='a'&&a[i]<='z')
                a[i]-=32;
        }

    }
    cout<<a<<"\n";

}
