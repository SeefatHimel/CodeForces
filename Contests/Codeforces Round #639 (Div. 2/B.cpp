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
#define pppp(a,b)              cout<<a<<"  "<<b<<"  "
#define newline                printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())

ll nm[500000]={},lst;

ll b_search(ll bg, ll en,ll vl);


int main()
{
    ll t,v,n,a,r;

    cin>>t;

        nm[0]=2;
        v=2;
        for(int i=1; v<=1000000000 ;i++)
        {
            nm[i] = ((i+1)*2 )+ i + nm[i-1];
            v = nm[i];

            lst=i;
        }


    while(t--)
    {
        a=0;
        cin>>n;
        v=n;

        while(v>1)
        {
            a++;
            r = b_search(0,lst, v);
//            cout<<" R \t = "<<r<<endl;
            v-=r;
        }
        ppp(a);
    }




    return 0;
}

ll b_search(ll bg, ll en,ll vl)
{
    ll mid = (bg + en) /2;

//    pppp("mid\t",mid);
//    pppp(vl,nm[mid]);
//    newline;

    if(nm[mid]==vl)
        return vl;
    else if(mid == 0 || mid == lst )
        return nm[mid];
    else if(nm[mid]<vl && nm[mid+1]>vl)
        return nm[mid];
    else if(nm[mid]<vl)
       return b_search(mid+1,en,vl);
    else if(nm[mid]>vl)
        return b_search(bg,mid,vl);
}
