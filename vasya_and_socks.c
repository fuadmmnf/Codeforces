#include<stdio.h>
int main()
{
    int d,a,b,c,n;
    scanf("%d %d",&a,&b);
    c=a;
    d=a%b;
    a=a+(a/b);

    n=a-c+d;

    if(n>=b)
    {
        if(n%b==1) a=a+(n/b)+(n%b)+1;
        else a=a+(n/b);
    }


    printf("%d",a);
    return 0;
}
