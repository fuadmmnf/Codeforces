#include<stdio.h>
int main()
{
    int count=0,a,b,c,d,n,i,j;
    scanf("%d %d",&a,&b);
c=a;
    for(i=1;i<=c;i++)
    {
       if(i%b==0) c++;
       count++;
    }
    printf("%d",count);
    return 0;
}
