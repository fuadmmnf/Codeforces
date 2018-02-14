#include<stdio.h>
int main()
{
    int min=12314,i,j,n,a,b,s,num[10000];
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<b-1;i++)
    {
        for(j=1+i;j<b;j++)
        {
            if(num[i]>num[j])
            {
                num[i]=num[i]+num[j];
                num[j]=num[i]-num[j];
                num[i]=num[i]-num[j];
            }
        }
    }

    for(i=0;i<b;i++)
    {
        if(i+a-1>=b) break;
        if(num[i+a-1]-num[i]<min) min=num[i+a-1]-num[i];
    }
    printf("%d",min);
    return 0;
}
