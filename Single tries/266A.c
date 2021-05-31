#include<iostream>
using namespace std;
main()
{
    int n,i,m=0;
    cin>>n;
    char a[n],c;
    cin>>a;
    c=a[0]
    for(i=1;i<n;i++)
    {
        if(a[i]=c)
            m++;
        else
        {
            c=a[i];
        }
    }
    cout<<m<<"\n";


}
