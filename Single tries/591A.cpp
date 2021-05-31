#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,v,m,r,a;
    cin>>n;
    while(n--)
    {
        cin>>v;
        if(v==2)
        {
             cout<<2<<endl;
             continue;
        }

       if(v%2==0) a=0;
       else a=1;
        cout<<a<<endl;
    }


    return 0;
}
