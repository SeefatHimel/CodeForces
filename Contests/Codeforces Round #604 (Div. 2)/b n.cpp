#include<bits/stdc++.h>
using namespace std;
///Himel_1603062

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
#define newline                printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())



int main()
{
    ll n,t,arr[220000],brr[220000],v,p,pp,pm,pl;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            arr[i]=v;
            brr[v]=i+1;
        }

ppp("wtf");

        v=1;
        pp=brr[v];
        pm=pp;
        pl=pp;
        ll ans[220000]={};
        while(v<=n)
        {
            p=brr[v];
            if(p>pm)
                pm=p;
            if(p<pl)
                pl=p;
            if(abs(pl-pm)==v-1)
            {
                ans[pl]=1;
            ans[pm]=1;
            }

            v++;

        }
      //  ppp("ans");

        for(int i=0;i<n;i++)
        {
            cout<<ans[i+1];
        }
        newline;
    }
    return 0;
}

