#include<bits/stdc++.h>
using namespace std;
///Himel_1603062

#define ll                     long long
#define ppp(a)                 cout<<a<<" "
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
#define newline                printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define pll(a)                 cout<<a<<endl



int main()
{
    int arr[300000],q,x,a,y,b,k,ans,n,v,c;
    double sum;
    scanf("%d",&q);
    while(q--)
    {
        ssi(n);
        for(int i=0;i<n;i++)
        {
            ssi(arr[i]);
        }
        sort(arr,arr+n,greater<ll>());
        sum=0;
        ssi(x);
        ssi(a);
        ssi(y);
        ssi(b);
        ssi(k);
        v=0;
        for(int i=0;i<n;i++)
        {
            while(1)
            {
                ppp("v : ");
                pll(v);
                if((v+1)%a==0 && (v+1)%b==0)
                {
                    /*if(x>y)
                        c=x;
                    else c=y;*/
                        c=x+y;
                    sum+=arr[i]*c/100.00;
                    break;
                }
                else if((v+1)%a==0)
                {
                    sum+=arr[i]*x/100.00;
                    break;
                }
                else if((v+1)%b==0)
                {
                    sum+=arr[i]*y/100.00;
                    break;
                }
                else if(v>n)
                    break;
                    v++;
            }
            v++;
            ppp("v  : ");
            ppp(v);
            ppp(" || Sum = ");
            ppp(sum);
            ppp(" k = ");
            pll(k);
            ppp("  || i = ");
            pll(i);



            if(v>=n)
                break;
            if(sum>=k)
                break;
        }

        ppp("Ans : ");

        if(sum<k)
            v=-1;
        pll(v);

    }


    return 0;
}
