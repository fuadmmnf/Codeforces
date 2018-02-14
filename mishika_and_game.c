#include<stdio.h>
int main()
{
    int a,b,i,m=0,c=0,n,num[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b) m++;
        else if(b>a) c++;
    }
    if(m>c) printf("Mishka\n");
    else if(c>m) printf("Chris\n");
    else printf("Friendship is magic!^^");
    return 0;
}
