#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,n,num[1005],amazing=0,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    max=num[0];
    min=num[0];
    for(i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            amazing++;
        }
        if(num[i]<min)
        {
            min=num[i];
            amazing++;
        }
    }
    printf("%d",amazing);
    return 0;
}
