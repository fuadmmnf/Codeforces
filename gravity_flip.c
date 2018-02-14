#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,n,num[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=n-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(num[j]>num[i])
            {
                c=(num[j]-num[i]);
                num[i]=num[i]+c;
                num[j]=num[j]-c;

            }
        }

    }
    for(i=0;i<n;i++)
    printf("%d ",num[i]);

    return 0;
}
