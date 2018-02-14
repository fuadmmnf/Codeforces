#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,l,n,num[100004],sum=0,crime=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]!=-1) sum+=num[i];
        else if(sum==0) crime++;
        else sum--;
    }
    printf("%d",crime);
    return 0;
}
