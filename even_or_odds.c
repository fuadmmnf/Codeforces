#include<stdio.h>
int main()
{
    long long int a,b,i,j,k,l,n,num[100000];
    scanf("%lld %lld",&a,&b);
    if(a%2==1)
    {
        if(b>a/2+1)
        {
            j=2;
            i=a/2+2;
        }
        else
        {
            j=1;
            i=1;
        }
    }
    else
    {
        if(b>a/2)
        {
            j=2;
            i=a/2+1;
        }
        else
        {
            j=1;
            i=1;
        }
    }
    for( ; ;j=j+2,i++)
    {
        if(i==b)
        {
            printf("%lld",j);
            return 0;
        }
    }

    return 0;
}
