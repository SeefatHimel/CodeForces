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
    ll t,v,x;
    string st[10];
    cin>>t;
    while(t--)
    {
        for(int i=0; i<9; i++)
        {
            st[i].clear();
            cin>>st[i];
        }
        x=0;

        for(int i =0 ; i<9;i++)
        {
            if(i%3 == 0)
                x=i/3;
            v = st[i][x] - '0';
            st[i][x] = '1';

            if(v==1)
                st[i][x]++;
            if((x+4) % 3 == 0)
                x++;
            else
                x+=4;
        }

        for(int i=0; i<9; i++)
        {
            cout<<st[i]<<endl;
        }
    }

    return 0;
}

