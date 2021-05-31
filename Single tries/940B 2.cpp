#include<bits/stdc++.h>
using namespace std;

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
#define newline                printf("\n");
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())



int main()
{
    ll n,k,a,b,s,s2,p,v,v1=0,v2=0,f;
    cin>>n>>k>>a>>b;
    v=n;
    while(1)
    {
        if(v==1)
            break;
        if(v>=k)
        {
            p=v/k-1;
            if(((v1+1)*b>(v2+p)*a)&&v%k==0)
            {
                if(((v1+1)*b+(v2+p)*a)<((v1*b)+(v2+v)*a))
                {
                    ppp(((v1+1)*b+(v2+p)*a))
                    return 0;
                }
                else
                {
                    ppp((v1*b)+(v2+v)*a)
                    return 0;
                }
            }
            else if(v%k==0)
            {
                v/=k;
                v1++;
            }
            else
            {
                if(v<k)
                {
                    v2+=v-1;
                    v=1;
                     ppp((v1*b)+(v2+v)*a)
                    return 0;
                }
                else
                {
                    v2+=k;
                    v-=k;
                }
            }
        }
        else
        {
            v2+=v-1;
            v=1;
        break;
        }
    }
    ppp((v1*b)+(v2+v)*a)
    return 0;
}

