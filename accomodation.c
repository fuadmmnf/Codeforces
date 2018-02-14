#include<stdio.h>

int main()
{
    int n,i,j,num[100][2],a=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        if(num[i][0]+2<=num[i][1])
        {
            a++;
        }
    }

    printf("%d",a);

    return 0;
}
