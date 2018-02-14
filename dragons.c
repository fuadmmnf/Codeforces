#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,l,n,num[100000][2];
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(j=0;j<b;j++)
    {
        c=0;
        for(i=0;i<b ;i++)
        {
            if(num[i][0]<0) continue;
            if(a>num[i][0])
            {
                c=1;
                a+=num[i][1];
                num[i][0]=-2;
                break;
            }
        }
        if(c==0)
        {
            printf("NO");
            return 0;
        }
    }

     printf("YES");
    return 0;
}
