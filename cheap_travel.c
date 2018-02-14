#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,n,m,sum=0;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    k=n*a;
    for( ; ; )
    {
        if(n-m>=0)
        {
            n-=m;
            sum+=b;
        }
        else
        {
            if(n*a>b)
            {
                sum+=b;
            }
            else
            {
                sum+=n*a;
            }
            break;
        }
    }
    if(sum<k)
    printf("%d",sum);
    else printf("%d",k);
    return 0;

}
