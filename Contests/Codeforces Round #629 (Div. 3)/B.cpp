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
    ll t,n,k,p,l,rz,rb,b1,b2;
    string st;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        st="";
        for(int i=0; i<n-2; i++)
            st+="a";
        for(int i=0; i<2; i++)
            st+="b";


        //ppp(st);

        k--;
        l=2;
        rz=1;
        while(k--)
        {
            p=n-1;

            for(int i=p; i>=0; i--)
            {
                if(st[i]=='b' && st[i-1]=='b' && st[i-2]=='a')
                {

                b1=i-2;
                b2=n-1;
                    cout<<l++<< " =  b1: "<<b1<<" b2: "<<b2<<endl ;


                    st[i]='a';
                    st[i-1]='a';
                    st[i-2]='b';
                    st[n-1]='b';
                    break;
                }
                if(st[i]=='a' && st[i+1]=='b')
                {
                    st[i]='b';
                    st[i+1]='a';
                    p=i+1;
                    b2--;


                    cout<<l++<< " =  b1: "<<b1<<" b2: "<<b2<<endl ;

                    break;
                }
            }

//            cout<<l++<< " = ";
//            ppp(st);

        }

        ppp(st);
        st.clear();
    }

    return 0;
}
