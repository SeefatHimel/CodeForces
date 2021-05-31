#include<iostream>
using namespace std;
main()
{
    int n,j=1,m;
    cin>>n>>m;
    string a;
    char b;
    cin>>a;
    for(int k=0;k<m&&j==1;k++)
    {
        j=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
            i++;
            j=1;
        }
    }
    }
    cout<<a<<endl;
}
