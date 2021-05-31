#include<iostream>
using namespace std;
main()
{
    long long int a,b,m,c,d,s;
    cin>>a>>b>>m;
    c=a/m;
    d=b/m;
    if(a%m!=0)c++;
    if(b%m!=0)d++;
    s=c*d;
    cout<<s;


}
