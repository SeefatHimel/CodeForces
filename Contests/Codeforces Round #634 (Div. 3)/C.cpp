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

ll a[220000],b[220000];

int main()
{
    ll t,n,v,ds,ms,k,an,df;

    set<ll>st;
    map<ll,ll>mp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mp.clear();
        st.clear();
        k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            st.insert(a[i]);

            mp[a[i]]++;

            if(mp[a[i]]==2)
            {
                b[k]=a[i];
                k++;
            }



        }
        if( n == 1 )
        {
            ppp(0);
            continue;

        }

        ds= st.size();
        an=0;
        for(int i =0 ; i<k;i++)
        {
            v=mp[b[i]];

            if(ds>v && an<v)
            {
                an=v;

            }
            else if(ds == v && an <v-1)
            {
                an =v-1;
            }
            else if(ds<v  && an < ds )
            {
                an = ds;
                break;
            }
        }
        if(an==0)
            an++;
//        printf("\t\t");
        ppp(an);

    }



    return 0;
}

