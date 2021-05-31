#include<string.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
main()
{
//    while(1)
    {
        char a[6];
        int i,c=0,s1,s2,t;
        cin>>a;

        s1=a[0]+a[1]+a[2];
        s2=a[3]+a[4]+a[5];
        if(s1==s2)
        {

            c=0;
        }
        else if(s1>s2)
        {
            t=s1-s2;
            if(t>=18)
            {
                c=3;

                if(t==18&&(a[0]=='9'||a[1]=='9'||a[2]=='9'))
                    c--;
            }
            else if(t>=9)
            {
                c=2;
                if(t==9&&(a[0]=='9'||a[1]=='9'||a[2]=='9'))
                    c--;
            }
            else
            {
                c=1;
            }

        }
        else if(s1<s2)
        {
            t=s2-s1;
            if(t>=18)
            {
                c=3;

                if(t==18&&(a[0]=='9'||a[1]=='9'||a[2]=='9'))
                    c--;
            }
            else if(t>=9)
            {
                c=2;
                //cout<<t<<" "<<a[4]<<endl;
                if(t==9&&(a[3]=='9'||a[4]=='9'||a[5]=='9'))
                    c=1;
            }
            else
            {
                c=1;
            }

        }
        cout<<c<<endl;
    }
}
