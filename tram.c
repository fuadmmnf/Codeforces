#include<stdio.h>
int main()
{
    int x=0,max=0,n,i,j,num[1000][2];

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
        for(j=0;j<2;j++)
        {

             if(i>0 && j==0)
            {
                x-=num[i][j];
            }
            if(j>0)
            {
                x+=num[i][j];
            }
             if(x>max) max=x;
        }
    }

    printf("%d",max);
    return 0;
}
