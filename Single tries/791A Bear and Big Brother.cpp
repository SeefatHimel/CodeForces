#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,num=0,a,b;
    cin>>a>>b;
    while(a<=b)
    {
        num++;
        a=a*3;
        b=b*2;

    }
    cout<<num<<endl;

    return 0;
}

