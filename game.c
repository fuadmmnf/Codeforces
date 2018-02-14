#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,n,num[50][2],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&num[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(num[i][0]==num[j][1]) count++;
        }
    }
    printf("%d",count);
    return 0;
}
