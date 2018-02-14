#include<stdio.h>
int main()
{
    int num[200],pos,a,b,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(num[j]==i)
            {
                printf("%d ",j+1);
            }
        }
    }
    return 0;
}
