#include<bits/stdc++.h>
using namespace std;
///Himel_1603062

#define ll                     long long
#define loop( i,a)             for(i=0;i<a;i++)
#define loop1(i,a)             for(i=1;i<=a;i++)
#define ppp(a)                 cout<<a<<endl;
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
    int t,n,arr[150],brr[150],s,p,pp,temp;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[arr[i]]=i;
        }
        s=0;
        p=1;
        while(s+1<n)
        {
            pp=brr[p];
            cout<<"pp = "<<pp<<"  p = "<<p<<endl;
            if(pp==p-1 && pp<n &&p<n)
            {
                p++;
            }
            else if(pp>=n ||p>=n)
            {
                break;
            }
            else if(p<n && pp<n){
                    ppp("swaped");
                swap(arr[pp],arr[pp-1]);
                swap(brr[arr[pp]],brr[arr[pp-1]]);
                s++;
                 for(int i=0;i<n;i++)
        {
            cout<<arr[i];
            if(i<n-1)
            cout<<" ";
        }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
            if(i<n-1)
            cout<<" ";
        }
        newline;
    }
    return 0;
}
