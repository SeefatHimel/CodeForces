#include<iostream>
using namespace std;
main()
{
    long long int n,b[5]= {},c1=0,c2=0,c=0,i,a;
    cin>>n;
    i=n;
    while(i--)
    {
        cin>>a;
        b[a]++;
    }
    c=b[4];
    if(b[1]>b[3])
        b[1]=b[1]-b[3];
    else
        b[1]=0;
    c=c+b[1]/4;
    b[1]=b[1]%4;
    c=c+b[2]/2;
    b[2]=b[2]%2;
    if(b[1]>=b[2]*2)
    {
        b[1]=b[1]-2*b[2];

    }
    else
        b[1]=0;
    if(b[1]>0)
        c++;
    c=c+b[2]+b[3];

    cout<<c<<"\n";

}




//    if(a1>a3)
//        {
//            if((a1-a3)>1)
//            {
//                if((a1-a3)%4==0)
//                    c1=a3+(a1-a3)/4;
//                else
//                    c1=a3+(a1-a3)/4+1;
//            }
//        }
//        else
//            c1=a3;
//        if(a2%2==0)
//            c2=a2/2;
//        else
//            c2=a2/2+1;
//        if((a1-a3)%4>=2&&a2%2!=0)
//            c=c1+c2+a4-1;
//        else
//            c=c1+c2+a4;
//cout<<c1<<"\t"<<c2<<"\t"<<a4<<"\n";

