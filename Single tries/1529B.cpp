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


ll ar[120000];

int main()
{
    ll t,n,v,z,k,p,od;

    cin>>t;


    while(t--)
    {
        cin>>n;
        z=0,v=0;
        k=inf;
        od=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]==0)
                z++;  // total 0 s

            if(ar[i]<0)
                od++;  // total negatives

            if(ar[i]>0)
                k=min(k,ar[i]);  // min after 0
        }

//        pppp("Z = ",z),newline;

        sort(ar,ar+n);

        if(z>1)
            ppp(od+z);
        else
        {
            v=1;
            for(int i =0; i<n-1 && ar[i]<
            k; i++)
            {
                if(abs(ar[i]-ar[i+1])>=k)
                    v++;

//               pppp("v  ",v),pppp("   i  ",i ),pppp("   k  ",k),newline;
            }

            p = od+z; // except the k
            ppp(max(p,v));
        }

    }


    return 0;
}

