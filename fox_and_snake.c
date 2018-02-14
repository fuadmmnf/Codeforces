#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,n;
    char str[1000];
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(i%2==1)
        {
            for(j=0;j<b;j++)
            {
                printf("#");
            }
        }
        else
        {
            if((i/2)%2==1)
            {
                for(j=0;j<b-1;j++)
                {
                    printf(".");
                }
                printf("#");
            }
            else
            {
                printf("#");
                for(j=0;j<b-1;j++)
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
