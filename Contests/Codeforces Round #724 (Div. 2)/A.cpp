#include<bits/stdc++.h>
using namespace std;
///Himel_1603062

#define ll                     long long
#define loop( i,a)             for(i=0;i<a;i++)
#define loop1(i,a)             for(i=1;i<=a;i++)
#define ppp(a)                 cout<<a<<endl
#define ssd(a)                 scanf("%lf",&a)
#define ssi(a)                 scanf("%d",&a)
#define ssl(a)                 scanf("%lld",&a)
#define ssc(a)                 scanf("%c",&a)
#define FOR(i,a,b)             for(i=a;i<b;i++)
#define FORE(i,a,b)            for(i=a;i<=b;i++)
#define reved(s)               reverse(s.begin(),s.end())
#define inf                    9000000000000000
#define pii                    3.1415926536
#define pb(a)                  push_back(a)
#define pppp(a,b)              cout<<a<<"  "<<b
#define newline                printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())



int main()
{
    ll t,n,v,a[650],ng, e, mx, o,mn,gc,z,g;

    cin>>t;


    while(t--)
    {
        cin>>n;
        ng=0, e=0, mx=-1, o=0,mn=inf;
        z=0;
        for(int i=0; i<n; i++)
        {
            cin>>v;
            a[i]=v;
            if(v<0)
                ng=1;

            if(v>mx)
                mx=v;

        }
        if(ng)
            ppp("NO");
        else
        {
            ppp("YES");
            ppp(mx+1);
            for(int i=0; i<mx; i++)
            {
                pppp(i," ");
            }
            ppp(mx);

        }
    }


    return 0;
}

