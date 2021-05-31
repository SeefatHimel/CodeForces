#include<bits/stdc++.h>
using namespace std;

#define ll                     long long
#define loop( i,a)             for(i=0;i<a;i++)
#define loop1(i,a)             for(i=1;i<=a;i++)
#define ppp(a)                 cout<<a<<endl;
#define ssd(a)                 scanf("%lf",&a)
#define ssi(a)                 scanf("%d",&a)
#define ssl(a)                 scanf("%ld",&a)
#define ssc(a)                 scanf("%c",&a)
#define FOR(i,a,b)             for(i=a;i<b;i++)
#define FORE(i,a,b)            for(i=a;i<=b;i++)
#define reved(s)               reverse(s.begin(),s.end())
#define inf                    9000000000000000
#define pii                    3.1415926536
#define pb(a)                  push_back(a)
#define pppp(a,b)              cout<<a<<"  "<<b;
#define newline                printf("\n");
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())



int main()
{
    ll n,k,a,b,s,s2,p,v,v1,v2,f;
    cin>>n>>k>>a>>b;
    v1=n%k;
    if(n<=k)
        v1=0;
    v2=n/k;
    v2*=k;
    s2=v2;
    v2=0;
    if(n<=k)
        s2=n;
    for(ll i=0; i<62; i++)
    {
//        pppp(v1,v2)
//        pppp("",s2)
//        newline
        if(s2<=1)
            break;
        if(s2%k==0)
        {
            v=s2/k;
            if(v*b>s2*a)
            {
                if(s2>k)
                {
                    v1+=k;
                    s2-=k;
                }
                else
                {
                    v1+=s2-1;
                    s2=1;
                }
                continue;
            }
            v2++;
            s2/=k;
        }
        else
        {
            if(s2>k)
            {
                v1+=s2%k-1;
                s2/=k;
                s2*=k;
            }
            else
            {
                v1+=s2-1;
                s2=1;
            }
        }


    }
//    pppp(v1,v2)
//    newline

//    ppp(p)
//    ppp(s2)
    s=v2*b+v1*a;
    ppp(s)


    return 0;
}
