#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s,t;
    map<char,int>mpp;
    int n,f=0;
    cin>>n;
    while(n--)
    {
        mpp.clear();
        f=0;
        cin>>s;
        cin>>t;
        for(int i=0;i<s.size();i++)
        {
           mpp[s[i]]=1;
        }
        for(int i=0;i<t.size();i++)
        {
            if(mpp[t[i]]==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");

    }


    return 0;
}

