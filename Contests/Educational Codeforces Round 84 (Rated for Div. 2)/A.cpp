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
    ll t,n,k,s,c;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>k;
        if((n%2==0 && k%2==1)  || (n%2==1 && k%2==0))
        {
            ppp("NO");
        }
        else
        {
            s=n;
            c=(k-1)*2+1;
                s-=(k-1)*(k-1);
            if(s<0 || s<c || s%2==0)
                ppp("NO");
            else
                ppp("YES");

        }

    }

    return 0;
}
