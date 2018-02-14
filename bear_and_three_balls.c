
#include<stdio.h>
int main()
{
    int a,b,i,j,n,m,num[50],var[50];
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<b;i++)
    {
        a=0;
        for(j=0;j<b;j++)
        {
            if(num[i]+1==num[j])
            {
                a=1;
            }
        }
        if(a==1)
        {
        for(j=0;j<b;j++)
        {
            if(num[i]+2==num[j])
                a=2;
        }
        if(a==2)
        {
            printf("YES");
            return 0;
        }
    }
    }
    printf("NO");
    return 0;
}
