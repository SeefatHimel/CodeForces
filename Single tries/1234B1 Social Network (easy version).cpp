#include<bits/stdc++.h>
using namespace std;



int main()
{
    int arr[250],n,k,m=0,v,brr[250],j;
    map<int,int>vcc;
    cin>>n>>k;
    for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(vcc[arr[i]]==0)
           {
               if(m>=n||m>=k)
               {
                   //cout<<"if"<<endl;
                   vcc[brr[0]]=0;
                   for( j=0;j<m;j++)
                    brr[j]=brr[j+1];
                   brr[j-1]=arr[i];
               }
               else
               {
                  // cout<<"else"<<endl;
                   brr[m]=arr[i];
               m++;

               }
               vcc[arr[i]]=1;
           }
          /* cout<<"m = "<<m<<endl;
            for(int i=0;i<m;i++)
        cout<<brr[i]<<ends;
    cout<<endl;*/
       }
       //cout<<"Ans : "<<endl;
       cout<<m<<endl;

    for(int i=m-1;i>=0;i--)
    {
        if(i<m-1)
            printf(" ");
        cout<<brr[i];
    }

    cout<<endl;


    return 0;
}



