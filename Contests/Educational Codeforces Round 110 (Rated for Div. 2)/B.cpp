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

bool checkPrime(ll n)
{
    for(ll i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}



int main()
{
    ll t,n,v,a[5000],e,d,am,tt,nn;
    map<ll,ll>mpp;

    cin>>t;


    while(t--)
    {
        mpp.clear();
        e=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
            mpp[a[i]]++;

        }
        sort(a,a+n);
        tt=n;
        v=0;
        for(int i=0; i<n; i++)
        {
            d=0;
            nn=a[i];
            if(a[i]==1)
            {
                am= 0; // among them
                v = am + mpp[a[i]]*e;
                tt-=mpp[a[i]];
                while(i<n-1 && a[i+1]==1)
                    i++;

                pppp(am,nn);
                pppp("  if   v  = ",v ),newline;


            }
            else if(a[i]%2==0)
            {
                am= mpp[a[i]]-1;
                am= (am*(am+1))/2; // among them
                tt-=mpp[a[i]];
                e-=mpp[a[i]];
                v+= am + mpp[a[i]]*tt;
                while(i<n-1 && a[i+1]==nn)
                    i++;

                pppp(am,nn);
                pppp("  else   v  = ",v ),newline;


            }
            else
            {
                if(checkPrime(nn))
                {
                    am= mpp[a[i]]-1;
                    am= (am*(am+1))/2; // among them
                    tt-=mpp[a[i]];

                    v+= am + mpp[a[i]]*e; //with all even numbers that are left
                    while(i<n-1 && a[i+1]==nn)
                        i++;
                    for(int j= i+1; j<n; j++)
                    {
                        if(a[j]%2==1 && !checkPrime(a[j]))
                        {
                            d=a[j];
                            if(__gcd(a[j],nn)>1)
                            {
                                v+=mpp[a[i]]*mpp[a[j]];
                            while(j<n-1 && a[j+1]==a[j] )
                                j++;
                            }

                        }
                    }

                    pppp(am,nn);
                    pppp("  pr   v  = ",v ),newline;


                }
                else
                {

                    am= mpp[a[i]]-1;
                    am= (am*(am+1))/2; // among them
                    tt-=mpp[a[i]];

                    v+= am + mpp[a[i]]*e; //with all even numbers that are left
                    while(i<n-1 && a[i+1]==nn)
                        i++;

                    for(int j= i+1; j<n; j++)
                    {
                        d=a[j];
                        if(__gcd(a[j],nn)>1)
                        {
                            v+=mpp[a[i]]*mpp[a[j]];
                            while(j<n-1 && a[j+1]==a[j] )
                                j++;
                        }
                    }

                    pppp(am,nn);
                    pppp("  npr   v  = ",v ),newline;


                }
            }
        }
        ppp(v);
    }


    return 0;
}

