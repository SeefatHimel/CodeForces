#include<stdio.h>
#include<string.h>
main()
{
    int i,c;
    char a[105];
    gets(a);
    if(a[0]>='A'&&a[0]<='Z')
    {
        for(i=1;i<strlen(a);i++)
        {
            if(a[i]>='A'&& a[i]<='Z')
                c=0;
            else
            {
                c=1;
                break;
            }
        }
    }
    else if(a[0]>='a'&&a[0]<='z')
        for(i=1;i<strlen(a);i++)
        {
            if(a[i]>='A'&& a[i]<='Z')
                c=0;
            else
            {
                c=1;
                break;
            }
        }
    for(i=0;i<strlen(a);i++)
    {
        if(c==0)
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]+=32;
            else if(a[i]>='a'&&a[i]<='z')
                a[i]-=32;
        }

    }
    puts(a);

}
