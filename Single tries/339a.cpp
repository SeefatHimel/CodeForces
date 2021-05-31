#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char a[102],c;
    int i,j;
    cin>>a;
    for(i=0;i<strlen(a)-1;i+=2)
        for(j=i+2;j<strlen(a);j+=2)
    {
        if(a[i]>a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }
    cout<<a<<"\n";

}
