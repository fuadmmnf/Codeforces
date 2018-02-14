#include<stdio.h>
int main()
{
    int b=0,i,n,num[100];
    float x;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        b+=num[i];
    }
    x=(float)b/(float)n;
    printf("%f",x);
    return 0;
}
