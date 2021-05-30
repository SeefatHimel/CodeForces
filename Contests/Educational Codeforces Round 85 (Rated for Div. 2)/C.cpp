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

ll a[300055][3],n;

void pall();


int main()
{
    ll t,w,sm,sp,pv,an,dm;


    cin>>t;
    while(t--)
    {
        cin>>n;
        w=0;
        an=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i][0]>>a[i][1];

        }
        while(w!=n)
        {
            sm=0;
            sp=0;
            for(int i=0; i <n ; i ++)
            {
                if(sm==0 && a[i][0]>0)
                {
                    sm=a[i][0];
                    dm=a[i][1];
                    sp=i;
                }
                else if(sm>0 && sm==a[i][0] && dm<a[i][1])
                {
                    dm=a[i][1];
                    sp=i;
                }
                else if(sm>0 && a[i][0]<sm && a[i][0]>0)
                {
                    sm=a[i][0];
                    sp=i;
                }
            }

            while(1)
            {
                an+=a[sp][0];
                if(a[sp][0]>0)
                    w++;
                pv=sp;
                a[sp][0]=0;
                sp++;
                if(sp==n)
                    sp=0;

//                cout<<"  SP "<<sp<<"   pv "<<pv<<"    an  "<<an<<"   w  "<<w<<endl;
//                pall();


                if(a[sp][0]==0)
                {
                    break;
                }
                else
                {
                    a[sp][0]-=a[pv][1];
                    if(a[sp][0]<1)
                    {
                        a[sp][0]=0;
                        w++;

//
//                        cout<<"  SP "<<sp<<"    an  "<<an<<"   w  "<<w<<endl;
//                        pall();


                    }
                    else
                    {
//                       ppp("\t\t\tBreak");
//
//                        cout<<"  SP "<<sp<<"    an  "<<an<<"   w  "<<w<<endl;
//                        pall();
//                        newline;


                        break;
                    }
                }
            }

        }
        ppp(an);
    }


    return 0;
}


void pall()
{
    for(int i=0; i<n; i++)
    {
        pppp(a[i][0],a[i][1]);
        newline;
    }
}


/*

5
3
7 15
2 14
5 3
3
20 10
12 16
22 60
3
2 15
5 14
7 3
3
5 15
7 14
2 3







*/
