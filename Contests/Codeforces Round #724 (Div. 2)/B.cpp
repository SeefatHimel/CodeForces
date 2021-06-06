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
    ll t,n,v,p,an;

    string str,vv,pp,aa,bb,cc;
    map<string,int>mpp;

    cin>>t;


    while(t--)
    {
        cin>>n;

        cin>>str;

//        ppp(str.size());

        p = 26;


        pp="a";
        an=0;
        while(p--)
        {
//            pppp(" p ",p), pppp("  f ", str.find(pp)),newline;
//            ppp(pp);


            if(str.find(pp)<0 || str.find(pp)>n-1)
            {
                an=1;
                ppp(pp);
                break;
            }

            pp[0]++;
        }
        if(an==0)
        {
            aa="a";
            bb=aa,cc=aa;
            for(int i=0; i<26; i++)
            {

                for(int j=0; j<26; j++)
                {
                    aa[0]='a'+i;
                    bb[0]='a'+j;
                    pp = aa + bb;


//                        pppp(" ------> ",pp), pppp("  f ", str.find(pp)),newline;

                    if(str.find(pp)<0 || str.find(pp)>n-1)
                    {
                        an=1;
                        ppp(pp);
                        break;
                    }
                }
                if(an==1)
                    break;
            }
        }

        if(an==0)
        {
            aa="a";
            bb=aa,cc=aa;
            for(int i=0; i<26; i++)
            {

                for(int j=0; j<26; j++)
                {
                    for(int k=0; k<26; k++)
                    {

                        aa[0]='a'+i;
                        bb[0]='a'+j;
                        cc[0]='a'+k;
                        pp = aa + bb + cc;

//                        pppp(" ------> ",pp), pppp("  f ", str.find(pp)),newline;


                        if(str.find(pp)<0 || str.find(pp)>n-1)
                        {
                            an=1;
                            ppp(pp);
                            break;
                        }


                    }
                    if(an==1)
                        break;
                }
                if(an==1)
                    break;
            }
        }


//        ppp("**********");
//        ppp(an);


    }


    return 0;
}

