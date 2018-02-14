#include<stdio.h>
int main()
{
    int i,j,temp,num[100];
    int a,b,x,y,n;
    x=0;
    a=0;
    b=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(num[j]<num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
         x+=num[i];
    }

    y=1;
    for(j=0;j<n;j++)
    {

        a+=num[j];

                b=(x-a);
        if(a>b)
        {
            printf("%d",y);
            return 0;
        }
        else
        {
            y=y+1;
        }
    }
    printf("0");

    return 0;


}
