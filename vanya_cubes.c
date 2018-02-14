#include<stdio.h>
int main()
{
    int i,a,sum,h,ad;
    scanf("%d",&a);
    sum=0;
    h=0;
    ad=0;
    for( ; ; )
    {
        ad++;
        sum+=ad;
        if(a-sum>=0)
        {
            a-=sum;
            h++;
        }
        else break;
    }
    printf("%d",h);
    return 0;
}

