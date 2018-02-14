#include<stdio.h>
int main()
{
    int max=1,a,b,i,j,n;
    long long num[105000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        a=1;
        for(j=i;j<n-1;j++)
        {
            if(num[j]<=num[j+1]) a++;

            else
            {
                i=j;
                break;
            }
            if(j+1==n-1)
            {
                i=n-1;
            }
        }
        if(a>max) max=a;
    }
    printf("%d",max);
    return 0;
}
