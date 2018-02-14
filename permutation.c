#include<stdio.h>
int main()
{
    int a=0,i,b,m,j,n,num[5500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    b=n;
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(num[j]==b)
            {
                m=0;
                break;
            }
            else m=1;

        }
        if(m==1) a++;
         b--;
        }
    printf("%d",a);
    return 0;
}
