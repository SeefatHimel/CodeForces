#include<bits/stdc++.h>
using namespace std;
///Himel_1603062

#define ll                     long long
#define loop( i,a)             for(i=0;i<a;i++)
#define loop1(i,a)             for(i=1;i<=a;i++)
#define ppp(a)                 cout<<a<<endl;
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
    long long int t, n, m , avg,v,arr[1500],sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            v=arr[i];
            if(v<=m)
                sum+=v;

        }
        if(arr[0]>=m)
        {
            ppp(arr[0]);
            continue;
        }

        if(sum>=m)
            sum=m;
        ppp(sum);
    }

    return 0;
}

