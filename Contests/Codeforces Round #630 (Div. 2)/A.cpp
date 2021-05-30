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
    ll t,x,x1,x2,y,y1,y2,a,b,c,d,aa,cc,zz,xx,yy;
    cin>>t;
    while(t--)
    {
//        ppp(t);
        cin>>a>>b>>c>>d;
        aa=b-a;
        cc=d-c;

        cin>> x >> y >> x1 >> y1 >> x2 >> y2;

        xx=x;
        yy=y;

        xx+=aa;
        yy+=cc;
        if(xx<x1 || xx>x2 || yy<y1 ||yy >y2)
        {
            ppp("NO");

//                cout<<"              "<<xx<<"  "<<yy<<endl;


            // ppp("k1");


            continue;
        }
        zz=0;
        if((x2-x1)<1 && (a+b)>0)
        {

            // ppp("k2");

             ppp("NO");
                continue;
        }
        if((y2-y1)<1 && (c+d)>0)
        {
            // ppp("k3");

             ppp("NO");
                continue;
        }

        if(a>b)
        {
            a-=b;
            b=0;
            if((x-a)<x1)
            {
            // ppp("k4");

                ppp("NO");
                continue;
            }
        }
        else if(b>a)
        {

            b-=a;
            a=0;
            if((x+b)>x2)
            {
            // ppp("k5");

                ppp("NO");
                continue;
            }
        }
        else if(a == b)
        {

            if((x2-x1)<1 && a>0)
            {
            // ppp("k6");

                ppp("NO");
                continue;
            }
        }

        if(c>d)
        {
            c-=d;
            d=0;
            if((y-c)<y1)
            {
            // ppp("k6");

                ppp("NO");
                continue;
            }
        }
        else if(d>c)
        {

            d-=c;
            c=0;
            if((y+d)>y2)
            {
            // ppp("k7");

                ppp("NO");
                continue;
            }
        }
        else if(c == d )
        {

            if((y2-y1)<1 && c>0)
            {
            // ppp("k8");

                ppp("NO");
                continue;
            }
        }




//        while((a > 0 || b >0) && zz<6 )
//        {
//            if((x-a)<x1)
//            {
//                a-=(x-x1);
//                if((x-x1)==0)
//                    zz++;
//                x=x1;
//            }
//            else
//            {
//                x-=a;
//                a=0;
//            }
//            if((x+b)>x2)
//            {
//                a-=(x2-x);
//                if((x2-x)==0)
//                    zz++;
//                x=x2;
//            }
//            else
//            {
//                x+=b;
//                b=0;
//            }
//
//            if(zz>5)
//            {
//                ppp("NO");
//                break;
//            }
//        }
//
//        if(zz>5)
//            continue;
//
//        zz=0;
//
//        while((c > 0 || d >0) && zz<6 )
//        {
//            if((y-c)<y1)
//            {
//                c-=(y-y1);
//                if((y-y1)==0)
//                    zz++;
//
//                y=y1;
//            }
//            else
//            {
//                y-=c;
//                c=0;
//            }
//            if((y+d)>y2)
//            {
//                c-=(y2-y);
//                if((y2-y)==0)
//                    zz++;
//
//                y=y2;
//            }
//            else
//            {
//                y+=d;
//                d=0;
//            }
//
//            if(zz>5)
//            {
//                ppp("NO");
//                break;
//            }
//        }
//
//
//
//        if(zz<=5)
            ppp("YES");
    }


    return 0;
}

