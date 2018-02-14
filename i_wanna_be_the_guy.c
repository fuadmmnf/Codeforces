#include<stdio.h>
#include<string.h>

int main()
{
    int a,b[400],i,j,n,k,num[400];
    scanf("%d",&n);
    for(i=0;i<1;i++)
    {
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            scanf("%d",&num[j]);
        }
    }
    k=a;
    for(i=0;i<1;i++)
    {
        scanf("%d",&a);
        for(j=k;j<a+k;j++)
        {
            scanf("%d",&num[j]);
        }
    }
    k+=a;
    for(i=1;i<=n;i++)
    {
        b[i]=0;
        for(j=0;j<k;j++)
        {
            if(num[j]==i)
            {
                b[i]=1;
                break;
            }
        }

    }
    for(i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}
