#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char a[105];
    int i,c=0;
    cin>>a;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

}
