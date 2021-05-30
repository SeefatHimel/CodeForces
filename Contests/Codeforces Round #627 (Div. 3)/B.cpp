
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
    int n,t,arr[5500],p,v,f;
    map<int,int>vcc;
    cin>>t;
    while(t--)
    {
        cin>>n;

        vcc.clear();
        f=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            v=arr[i];
        //    ppp(v);
            vcc[v]++;
            if(vcc[v]>1 && f==0)
            {

               // ppp("in vcc loop")

                for(int j=0;j<i;j++)
                {
                    if(arr[j]==v)
                    {
                       p=j;
                       break;
                    }
                }
                if(i-p>1)
                    f=1;
            }

        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
