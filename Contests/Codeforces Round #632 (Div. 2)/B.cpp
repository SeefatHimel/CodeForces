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

ll a[150000],b[150000],c[150000];


int main()
{
    ll t,nn,fp,fn,p,n,v;

    cin>>t;
    while(t--)
    {
        cin>>nn;
        n=-1,p=-1;
        fp=0,fn=0;
        for(int i=0;i<nn;i++)
        {
            cin>>a[i];
            if(a[i]>0 && fp ==0)
            {
                fp=1;
                p=i;

//                ppp(i);

            }
            if(a[i]<0 && fn ==0)
            {
                fn=1;
                n=i;
            }

        }

//        for(int i=0;i<nn;i++)
//            cout<<a[i]<<" ";
//        newline;


        for(int i=0;i<nn;i++)
        {
            cin>>b[i];
            c[i]=b[i]-a[i];
        }
        if(c[0]!=0)
        {
            ppp("NO");
            continue;           ;
        }
        fp=0,fn=0;
        v=0;
        for(int i=0;i<nn;i++)
        {
            if(c[i]>0 && fp==0)
            {
                fp=1;

//                    newline;
//                    cout<<"p  "<<p<<"   "<<i;
//                    newline;

                if(i<=p)
                {
                    ppp("NO");
                    v--;
                }
                    break;
            }
            if(c[i]<0 && fn==0)
            {
                fn=1;
                if(i<=n)
                {
//                    newline;
//                    cout<<"n  "<<n<<"   "<<i;
//                    newline;

                    ppp("NO");
                    v--;
                }
                    break;
            }
        }
        if(v==0)
            ppp("YES");
    }

    return 0;
}
