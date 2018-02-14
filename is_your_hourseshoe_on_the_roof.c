#include<stdio.h>
int main()
{
    long long int i,j,a,b,c,n,d,count=0,num[4];
    for(i=0;i<4;i++)
        scanf("%lld",&num[i]);
    for(i=0;i<3 && num[i]!=-2;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(num[i]==num[j])
            {
                count++;
                num[i]=-2;
            }
        }
    }
    printf("%lld",count);
    return 0;
}
