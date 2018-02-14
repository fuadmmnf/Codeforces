#include<stdio.h>
int main()
{
    int n,a[3],b,x=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<3;j++)
        {
            b+=a[j];

        }
        if(b>=2) x++;

    }
    printf("%d",x);
    return 0;
}
