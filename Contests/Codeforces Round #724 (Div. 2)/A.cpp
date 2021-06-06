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
    ll t,n,v,a[650],ng, e, mx, o,mn,gc,z;

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
            if(v%2==0)
                e=1;
            if(v%2==1)
                o=1;
            if(v>mx)
                mx=v;
            if(v>0 && v<mn)
                mn=v;
                if(v==0)
                    z=1;

        }
        sort(a,a+n);
        gc = mx;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
               if(__gcd(mn, a[i])<gc)
                    gc=__gcd(mn, a[i]);
            }
        }
        if(ng==1 || (o==1 && mx>300) || (e==1 && mx>600))
            ppp("NO");
        else
        {
            ppp("YES");
            v=mx/gc;
            if(z==1)
                v++;
            ppp(v);

            if(z==1)
                mn=0;
            mn=min(mn,gc);
            e = mn/gc;
            if(mn==gc)
                e=gc;
//            pppp("\t mx = ",mx),
//            pppp(" mn = ",mn),
//            pppp(" gc = ",gc),
//            pppp(" mc/gc = ",mn/gc), newline;

                for(int j=e; j<mx; j+=gc)
                    cout<<j<<" ";

            ppp(mx);
        }
    }


    return 0;
}

