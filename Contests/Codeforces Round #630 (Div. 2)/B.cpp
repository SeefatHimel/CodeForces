#include<bits/stdc++.h>
using namespace std;
////Himel_1603062

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
    ll t,n,a[1200],b[1200],c[1200],v,tv;

    map<int,int>prime;
    map<int,int>clr;

    tv=1;
    for(int i=0; i<1000; i++)
    {
        v=i+1;
        if(v%2==0)
        {
            prime[v]=0;
            continue;
        }
            prime[v]=1;

        for(int j=3; j<=sqrt(v); j+=2)
        {
            if(v%j==0)
            {
                prime[v]=0;
                break;
            }
        }

    }


    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
//        sort(a,a+n);
        v=1;
        clr.clear();
        for(int i=0; i<n; i++)
        {

//            cout<<"\t\t\t"<<a[i]<<endl;

            if(prime[a[i]]==1)
            {

//                cout<<" P  " <<prime[a[i]]<<endl;

                if(clr[a[i]]>!0)
                {
                    clr[a[i]]=v;
                    b[i]=v;
                    v++;
                }
                else
                {
                    b[i]=clr[a[i]];
                }
            }
            else
            {
                if(clr[a[i]]>0)
                {
                    b[i]=clr[a[i]];
                    continue;
                }
                tv=0;

                for(int j=2; j<=sqrt(a[i]); j++)
                {
                    if(a[i]%j==0)
                    {
//                        ppp(j);
                        if(clr[j]>0 || clr[a[i]/j]>0)
                        {
                            tv=clr[j];
//                            cout<<"   f   "<<j<<"   "<< a[i]/j << "  a " <<a[i] <<endl;
                            break;
                        }
                    }
                }

                if(tv==0)
                {
                    tv=v;
                    v++;
                }

//                    cout<<"TV  "<<tv<<"    i   "<<i<<endl;

                for(int j=2; j-1<=sqrt(a[i]); j++)
                {
                    if(a[i]%j==0)
                    {

//                                cout<<j<<"  "<<a[i]/j<<endl;
                            clr[j]=tv;
                            clr[a[i]/j]=tv;
                    }
                }


//    if(i==0)
//        newline;

                clr[a[i]]=tv;
                b[i]=tv;


            }
        }
        ppp(v-1);
        for(int i=0;i<n;i++)
        {
            if(i>0)
                cout<<" ";
            cout<<clr[c[i]];
        }
        newline;
        clr.clear();
    }



    return 0;
}
