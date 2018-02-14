#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,n=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",b);
        a-=b;
        c=a;
        b=0;
    }
    else if(b>a)
    {
        printf("%d",a);
        b-=a;
        c=b;
        a=0;
    }
    else
    {
        printf("%d 0",a);
        return 0;
    }
    for( ; ; )
    {
        if(c-2>=0)
        {
            n++;
            c-=2;
        }
        else break;
    }
    printf(" %d",n);
    return 0;
}
