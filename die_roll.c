#include<stdio.h>
int main()
{
    int a,b,c,d,n,i,j;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>b) c=a;
        else c=b;

        d=7-c;
        if(d>6) printf("0/1\n");
        else if(d%6==0) printf("1/1\n");

        else if(d%2==0) printf("%d/%d\n",d/2,3);
        else if(d%3==0) printf("%d/%d\n",d/3,2);
        else printf("%d/%d\n",d,6);
    }
    return 0;

}
