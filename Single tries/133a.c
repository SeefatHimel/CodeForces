#include<stdio.h>
#include<string.h>
main()
{
    char a[105];
    int i,c=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]<33||a[i]>126)
        {
             break;
        }

        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            c=1;
        }
    }
    if(c==1)
        printf("YES\n");
    else
        printf("NO\n");
}
