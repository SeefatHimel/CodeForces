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
    int n,z,sum,e,p;
    string inn;
    cin>>n;
    while(n--)
    {
        cin>>inn;
        z=0;
        sum=0;
        e=0;
        for(int i=0; i<inn.size(); i++)
        {
            if(inn[i]=='0')
                z++;
            else
            {
                sum+=inn[i]-'0';
                p=inn[i]-'0';
                if(p%2==0)
                    e=1;
            }
        }
        if(sum%3==0)
        {

            if((e==1 && z>0) || sum ==0 || z >1)
            {
                ppp("red");
            }
            else
                ppp("cyan");
        }
        else
            ppp("cyan");
            inn.clear();
    }

    return 0;
}