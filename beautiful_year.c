#include<stdio.h>
#include<string.h>

int main()
{
    int a[4],b,c,d,i,j,k,n;
    scanf("%d",&n);

    for(i=n+1;1;i++)
    {
        d=i;
        for(k=0;k<4;k++)
        {
            if(d!=0)
            a[k]=d%10;
            else break;

            d/=10;
        }

        for(k=0;k<4;k++)
        {
            for(j=k+1;j<4;j++)
            {
                if(a[k]==a[j])
                {
                    b=0;
                    break;
                }
                else
            {
                b=1;
            }
            }

            if(b==0) break;
        }

        if(b==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;

}
