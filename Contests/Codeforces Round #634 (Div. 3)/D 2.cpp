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
    ll t,v,k,tm,ax,ay,bf,bb;
    string st[10];
    map<ll,ll>mp;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<9; i++)
        {
            st[i].clear();
            cin>>st[i];
        }
        mp.clear();



        v= st[0][0] - '0';
//        mp[v]=1;

        st[0][0] = 1 + '0';
        if(v==1)
            st[0][0]++;


        v= st[1][4] - '0';

        st[1][4] = 1 + '0';
        if(v==1)
            st[1][4]++;


        v= st[2][8] - '0';

        st[2][8] = 1 + '0';
        if(v==1)
            st[2][8]++;



        v= st[3][1] - '0';


        st[3][1] = 1 + '0';
        if(v==1)
            st[3][1]++;


        v= st[4][5] - '0';

        st[4][5] = 1 + '0';
        if(v==1)
            st[4][5]++;


        v= st[5][6] - '0';

        st[5][6] = 1 + '0';
        if(v==1)
            st[5][6]++;



        v= st[6][2] - '0';

        st[6][2] = 1 + '0';
        if(v==1)
            st[6][2]++;



        v= st[7][3] - '0';

        st[7][3] = 1 + '0';
        if(v==1)
            st[7][3]++;



        v= st[8][7] - '0';

        st[8][7] = 1 + '0';
        if(v==1)
            st[8][7]++;







//        v=8;
//        k=1;
//        tm = st[8][8];
//        while(v--)
//        {
//            st[k][k]=st[k-1][k-1];
//        }
//        st[0][0]=tm;


//        newline;
//        newline;
//        newline;
//        newline;


        for(int i=0; i<9; i++)
        {
            cout<<st[i]<<endl;
        }
    }

    return 0;
}

