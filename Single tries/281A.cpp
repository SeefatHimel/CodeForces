#include<iostream>
#include<string.h>
using namespace std;
main()
{
    int i;
    char a[1005];
    cin>>a;
    if(a[0]>='a'&&a[0]<='z')
        a[0]=a[0]-32;
//    for(i=1;i<strlen(a);i++)
//    {
//        if(a[i-1]==' '&&a[0]>='a'&&a[0]<='z')
//           a[0]=a[0]+32;
//
//    }
    cout<<a<<"\n";

}
