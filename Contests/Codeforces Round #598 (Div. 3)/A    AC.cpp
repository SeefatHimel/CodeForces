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
#define pppp(a,b)              cout<<a<<"  "<<b;
#define newline                printf("\n");
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())



int main()
{
    ll t,a,b,s,n,ans,m,f=0;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        m=a*n;
        f=0;
        if(m>s)
        {
           m=s%n;

        }
        else{
            m=s-m;

        }
        if(m<=b)
                f=1;

    if(f==1)
        ppp("YES");
    else
        ppp("NO");

    }

    return 0;
}

