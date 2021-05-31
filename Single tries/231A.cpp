#include<iostream>
using namespace std;
main()
{
    int n,a,b,c,d,m=0,i;
    cin>>n;
    while(n--)
    {

        cin>>a>>b>>c;
        d=a+b+c;
        if(d>=2)
            m++;

    }
    cout<<m<<"\n";


}
