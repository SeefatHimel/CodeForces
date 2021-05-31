#include<bits/stdc++.h>
using namespace std;



int main()
{
    int arr[5]={},n;
    char v;
    cin>>n;
    while(n--)
    {
        cin>>v;
        arr[v-'A']++;


    }
    if(arr[0]>arr[3])
        cout<<"Anton"<<endl;
    else if(arr[0]<arr[3])
        cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;


    return 0;
}
