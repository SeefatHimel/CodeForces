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
#define spc()                    cout<<" "




ll a[110000],b[110000];

int main()
{
    ll t,n,v,df,p,m,tm,s;
    map<ll,ll>mp;


    cin>>t;
    while(t--)
    {
        cin>>n;
        mp.clear();

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        tm=0;
        p=0;
        for(int i=1; i<n; i++)
        {
            if(a[i]<a[i-1])
            {
                v=a[i-1]-a[i];
                if(mp[v] == 1)
                    continue;
                else
                    mp[v]=1;

                b[p]= v;
                p++;
            }
        }
        sort(b,b+p);
        m=0;
        s=0;
        cout<<" p " <<p<<endl;

        for(int i=0; i<p; i++)
        {
            v=b[i];



            while(v>s)
            {
                if(m==0)
                    m=1;
                else
                    m=m<<1;
                s+=m;
                tm++;


                cout<<"\ttm  "<<tm<<"  v  "<<v<<"  m "<<m<<"  s "<<s<<endl;


            }



            cout<<"\ttm  "<<tm<<"  v  "<<v<<"  m "<<m<<"  s "<<s<<endl;


        }
        ppp(tm);
    }


    return 0;
}
/*

1
5
1 500 123 650 87


1
5
5 -10 2 -9 -5


*/