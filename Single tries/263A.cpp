#include<iostream>
using namespace std;
main()
{

    int i,j,c[5][5],a,b,s;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
    {
        cin>>c[i][j];
        {
            if(c[i][j]==1)
            {
                a=i,b=j;
            }
        }
    }
    if(a>=2)
    {
        if(b>=2)
        {
            s=a+b-4;
        }
        else
        {
            s=a-b;
        }
    }
    else
    {
        if(b>=2)
        {
            s=b-a;
        }
        else
        {
            s=4-a-b;
        }
    }
    cout<<s<<endl;
}