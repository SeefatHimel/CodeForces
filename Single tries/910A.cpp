#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define loop(a) for(int i=0;i<a;i++)


int main()
{
    ll n,d,p,c=0,f,fn=0;
    string a;
    cin>>n>>d;
    cin>>a;
    loop(a.size())
    {
        if(a[n-1]!='1')
            break;
        p=i+d;
        //cout<<i<<ends<<p<<endl;
        f=0;
        for(int j=p;j>i;j--)
        {
            if(j==n-1)
                fn=1;
            if(a[j]=='1')
            {
                c++;
                f=1;
                i=j-1;
                break;
            }
        }
        if(f==0)
            break;
    }
    if(c==0||fn==0)
        c=-1;
    cout<<c<<endl;

    return 0;
}
