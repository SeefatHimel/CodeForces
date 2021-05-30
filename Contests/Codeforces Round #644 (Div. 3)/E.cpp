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
    ll t,n,an,k;
    string ar[55];
    char v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k = 0;
        for(int i =0; i<n; i++)
        {
            cin>>ar[i];
            for(int j=0; j<n; j++)
            {
                v=ar[i][j];
                if(v=='1')
                    k++;

            }
        }

        an = 1;
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!= n-1 && j != n-1)
                {
                    if(ar[i][j]=='1')
                    {
                        if(ar[i][j+1]!='1' && ar[i+1][j]!='1')
                        {
                            an = 0;
                            break;
                        }
                    }
                }

            }
            if(an == 0)
                break;
        }

        if(an==0 )
            ppp("NO");
        else
            ppp("YES");
    }

    return 0;
}
