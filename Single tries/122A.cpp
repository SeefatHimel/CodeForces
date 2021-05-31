#include<iostream>
using namespace std;
main()
{
    int a[]={4,7,44,77,47,74,444,447,474,477};
    int n,c=1,k,i;
    cin>>n;
    k=n;
    while(k!=0)
    {
        if(k%10==7||k%10==4)
            c=1;
        else{
            c=0;
            break;
        }
        k=k/10;
    }
    if(c==0)
    {
        //cout<<k<<endl;
        for(i=0;i<10;i++)
        {
            if(n%a[i]==0)
            {
                //cout<<a[i]<<" "<<i<<endl;
                c=1;
                break;
            }
        }
    }
    if(c==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
