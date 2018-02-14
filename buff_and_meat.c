#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,d,i,j,n,p,min=200,kg=0,tk=0,day,exp=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(b[i]>b[j])
            {
                break;
            }
            exp+=b[i]*a[j];
        }
        i=j-1;
    }
    printf("%d",exp);
}
