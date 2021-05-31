#include<stdio.h>
main()
{
    int x,c;
    scanf("%d",&x);
    c=x/5;
    x=x%5;
    if(x>0)
    {
        c+=x/4;
        x%=4;
        if(x>0)
        {
            c+=x/3;
            x%=3;
            if(x>0)
            {
                c+=x/2;
                x%=2;
                if(x>0)
                    c+=x;

            }
        }
    }
    printf("%d\n",c);

}

