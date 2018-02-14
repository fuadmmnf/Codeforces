#include<stdio.h>
int main()
{
    int i,j,a,b,c,n,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
            scanf("%d %d",&c,&d);
            if(d>b) i=d-b;
            else i=b-d;
            if(c>a) j=c-a;
            else j=a-c;
            if(i>j) printf("%d\n",i);
            else printf("%d\n",j);
    }
    return 0;
}
