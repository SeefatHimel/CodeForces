#include<bits/stdc++.h>
using namespace std;
///Himel_1603062

#define ll                     long long
#define loop( i,a)             for(i=0;i<a;i++)
#define loop1(i,a)             for(i=1;i<=a;i++)
#define ppp(a)                 cout<<a<<endl
#define ssd(a)                 scanf("%lf",&a)
#define ssi(a)                 scanf("%d",&a)
#define ssl(a)                 scanf("%ld",&a)
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
    ll n,sm='a'+'b'+'c',f;
    string stt;
    char v;
    cin>>n;
    while(n--)
    {
        cin>>stt;
        if(stt.size()>1)
        {
            f=1;
            for(int i=0; i<stt.size(); i++)
            {
                v=stt[i];
                if(v=='?')
                {
                    if(i==0)
                    {
                        if(stt[i+1]!='?')
                        {
                            if(stt[i+1]>'a')
                                stt[i]='a';
                            else if(stt[i+1]>'b')
                                stt[i]='b';
                            else
                                stt[i]='c';
                        }
                        else
                            stt[i]='a';

                    }
                    else if(i== stt.size()-1)
                    {
                       if(stt[i-1]!='?')
                        {
                            if(stt[i-1]>'a')
                                stt[i]='a';
                            else if(stt[i-1]>'b')
                                stt[i]='b';
                            else
                                stt[i]='c';
                        }
                        else
                            stt[i]='a';
                    }
                    else
                    {
                        if(stt[i+1]!='?')
                        {
                            sm='a'+'b'+'c';
                            sm=sm-stt[i+1]-stt[i-1];
                            stt[i]=sm;
                        }
                        else{
                            if(stt[i-1]>'a')
                                stt[i]='a';
                            else if(stt[i-1]>'b')
                                stt[i]='b';
                            else
                                stt[i]='c';
                        }
                    }
                }
                else if(i>0&& stt[i]==stt[i-1])
                    {
                        f=0;
                        break;
                    }
            }
            if(f==0)
                cout<<"-1"<<endl;
            else
                cout<<stt<<endl;
            stt.clear();
        }
        else
        {
            if(stt[0]=='?')
                stt[0]='a';
            cout<<stt<<endl;
            stt.clear();

        }


    }

    return 0;
}
