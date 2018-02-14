#include<stdio.h>
int main()
{
    int a,even=0,odd=0,n,i,j,num[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0) even++;
        else odd++;
    }
    if(even==1)
    {
        for(i=0;i<n;i++)
        {
            if(num[i]%2==0)
            {
                printf("%d",i+1);
                return 0;
            }
        }
    }
    else
    {
          for(i=0;i<n;i++)
        {
            if(num[i]%2==1)
            {
                printf("%d",i+1);
                return 0;
            }
        }
    }
    return 0;
}
