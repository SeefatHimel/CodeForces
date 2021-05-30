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
    ll t,n,k,v,kk,pn,dn;
    map<ll,ll>mpp;
    map<ll,ll>mdd;
        vector<ll> stk;

    cin>>t;
    while(t--)
    {
        cin>>n;
        mpp.clear();
        mdd.clear();
        stk.clear();
        for(int i=0;i<n;i++)
        {
            cin>>k;

            kk=k;

            stk.clear();
            while(kk--)
            {
                cin>>v;
                stk.push_back(v);

            }
            sorted(stk);
            kk=k;
            while(kk--)
            {
                v= stk.front();
                stk.erase(stk.begin());
                if(mpp[v]==0)
                {
                    mpp[v]=1;
                    mdd[i]=1;
                 //   cout<<"in   >  "<<i+1<<" "<<v<<endl;
                    break;
                }
            }

        }
        if(mpp.size()==n)
        {
            ppp("OPTIMAL");
            continue;
        }
        else
            ppp("IMPROVE");
        pn=1,dn=0;
        while(dn!=n)
        {
            //cout<<"D   >  "<<dn<<"  "<<pn<<endl;



            if(mpp[pn]==1)
                pn++;
            if(mdd[dn]==1)
                dn++;
            if(mpp[pn]!=1 && mdd[dn]!=1)
            {
                mpp[pn]=1;
                mdd[dn]=1;
                cout<<dn+1<<" "<<pn<<endl;
                pn++;
                dn++;
                break;
            }
        }

    }

    return 0;
}
