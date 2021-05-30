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
    ll t,n,v,ab,af,m;
    map<int,int>mp;


    cin>>t;
    while(t--)
    {
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);

        m=(n-1)/2;

        ab=m;
        af=m-1;

        for(int i=0; i<m; i++)
        {
            if(i>0)
                spc();
            cout<<a[ab];
            ab++;
            if(n%2==0 && i==0)
            {

                spc();
                cout<<a[ab];
                ab++;
            }
            spc();
            cout<<a[af];
            af--;
        }
        spc();
        cout<<a[n-1]<<endl;

    }


    return 0;
}
