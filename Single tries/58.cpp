#include<iostream>
using namespace std;
main()
{
    string a;
    cin>>a;
    int i,c=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(c==0&&a[i]=='h')
            c=1;
        else if(c==1&&a[i]=='e')
            c++;
        else if(c==2&&a[i]=='l')
            c++;
            else if(c==3&&a[i]=='l')
            c++;
            else if(c==4&&a[i]=='o')
            c++;
            if(c==5)
                break;
    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
