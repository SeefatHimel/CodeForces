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


ll binarySearch(ll arr[], ll l, ll r, ll x)
{

    if (r >= l)
    {
        ll mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array

    return l + (r - l) / 2;
}

//    ll result = binarySearch(arr, 0, n - 1, x);

int main()
{
    ll t,n,v,l,r,mn,p,q,d,dd,qq,an,b;

    ll a [220000]= {};

    cin>>t;


    while(t--)
    {
        cin>>n>>l>>r;
        mn=-1;
        b=0;  // ans
        for(int i=0; i<n; i++)
        {
            cin>>v;
            a[i]=v;
            if(v<r)
                mn=max(v,mn); // max value which is less than r

        }

        sort(a,a+n);
        p=binarySearch(a, 0, n - 1, mn);

        while(p<n-1 && a[p+1]==mn)  // getting the max position
        p++;

//        pppp("   p   ",p),newline;


        for(int i=p ; i>0; i--)
        {
            v=a[i];

            d = l-v;
            dd= r-v ;
            q=binarySearch(a, 0, i- 1, d);  //  lower limit
            qq=binarySearch(a, 0, i - 1, dd);  // upper limit
            while(qq>=0 && a[qq]>dd)
                qq--;

            while(qq<i-1 && a[qq+1]== a[qq])
                qq++;
            while(q>0 && a[q-1]==a[q])
                q--;
            if(qq==i)
                qq--;
            an = qq-q +1 ;

            d= a[q]+v;
            dd= a[qq]+v;

            if(d>r || dd<l)
                continue;

            if(qq>=i)
                an = i-q;
//        pppp("v  ",v),pppp("  q  ",q),pppp("  qq  ",qq), pppp("  an ","");
//        ppp(an);

            b+=an;

        }

        ppp(b);
    }


    return 0;
}


/*



4
5 5 8
5 1 2 4 3

5
5 3 3
3 1 4 1 4


5
5 4 8
5 1 1 5 1


*/
