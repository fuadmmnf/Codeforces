#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,n;
    scanf("%d",&n);
    int ang[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ang[i]);
    }

    for(i=0;i<n;i++)
    {
        if(360%(180-ang[i])==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
