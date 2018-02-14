#include<stdio.h>
int main()
{
    int num[100][3],n,i,j,sum[3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);

        }
    }
        for(j=0;j<3;j++)
        {
            sum[j]=0;
            for(i=0;i<n;i++)
            {
                sum[j]+=num[i][j];
            }
        }


    for(i=0;i<3;i++)
    {
        if(sum[i]==0) continue;
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
