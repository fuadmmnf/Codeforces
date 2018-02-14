#include<stdio.h>

int main()
{
    int a,b,i,j,c,d,n,num[100500],count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(num[i]!=num[i+1]) count++;
    }
    printf("%d",count);
    return 0;
}
