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

    return 0;
}
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
    string a,b,x;
    ll t,v,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>x;
        a=x;
        b=x;
        a[0]='1';
        b[0]='1';
        v=0;
        for(int i=1;i<n;i++)
        {
            if(x[i]=='0')
            {
                a[i]='0';
                b[i]='0';

            }
            else if(x[i]=='1' && v==0)
            {
                a[i]='1';
                b[i]='0';
                v=1;

            }
            else if(x[i]=='2' && v==0)
            {
                a[i]='1';
                b[i]='1';

            }
            else if(x[i]=='1' && v==1)
            {
                a[i]='0';
                b[i]='1';
//                v=1;

            }
            else if(x[i]=='2' && v==1)
            {
                a[i]='0';
                b[i]='2';
//                v=1;

            }
        }
        ppp(a);
        ppp(b);
    }

    return 0;
}
