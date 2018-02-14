#include<stdio.h>

int main()
{
    int i,j,a,b,c,d=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++)
    {
        d+=i*a;
    }
    if((b-d)>0) printf("0");
    else printf("%d",d-b);

    return 0;
}
