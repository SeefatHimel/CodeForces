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

ll prr[205][5];
ll drr[205][5];
map<int,int>mpp;

int dff(int i)
{
    int d;
    d=abs(prr[i][0]-drr[i][0]);
    d+=abs(prr[i][1]-drr[i][1]);
    return d;
}

int main()
{
    ll n,m,k,d,v,x,y,mnn,pp,ann=0;
    //vector<vector<int>>vcc;
    string ss,ans="";
    cin>>n>>m>>k;
    for(int i=0; i<k; i++)
        cin>>prr[i][0]>>prr[i][1];
    mnn=inf;
    for(int i=0; i<k; i++)
    {
        cin>>drr[i][0]>>drr[i][1];
        d=dff(i);
        if(mnn>d)
        {
            mnn=d;
            pp=i;
        }
    }


//    pppp("size ",mpp.size());
//    newline;


    while(mpp.size()<=k)
    {
        if(mpp[pp]==1)
            break;
        v=pp;
        ann+=dff(v);
        mpp[v]=1;
        x=prr[v][0]-drr[v][0];
        y=prr[v][1]-drr[v][1];

//        cout<<"V = "<<v<<"  X = "<<x<<"    Y =" <<y<<"  Size : "<<mpp.size()<<endl;


        if(x<0)
            ss="D";
        else
            ss="U";
        for(int kk = 0; kk< abs(x) ; kk++)
            ans+=ss;
        if(y<0)
            ss="R";
        else
            ss="L";

        for(int kk = 0; kk< abs(y) ; kk++)
            ans+=ss;
        mnn=inf;
        for(int kk = 0 ; kk<k; kk++)
        {
            if(mpp[kk]==1)
                continue;
            prr[kk][0]-=x;
            prr[kk][1]-=y;
            if(prr[kk][0]>n)
                prr[kk][0]=n;
            if(prr[kk][0]<1)
                prr[kk][0]=1;
            if(prr[kk][1]>m)
                prr[kk][1]=m;
            if(prr[kk][1]<1)
                prr[kk][1]=1;

//            pppp("size ",mpp.size());
//            newline;


            if(mpp[kk]!=1)
            {
                d=dff(kk);
                if(mnn>d)
                {
                    mnn=d;
                    pp=kk;

//                    cout<<" pp " << pp<<endl;

                }

            }

        }

//        pppp("size ",mpp.size());
//        newline;

    }
    ppp(ann);
    ppp(ans);

    return 0;
}
