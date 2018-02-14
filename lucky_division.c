#include<stdio.h>
int main()
{
    int a,num,i,j;

    scanf("%d",&num);

    for(i=1;i<1000;i++)
    {
        for(j=10;j<=1000;j=j*10)
        {
        if((((i%j)/(j/10))==4 || ((i%j)/(j/10))==7) && ((i%j)/(j/10))!=0 )
            {
                a=1;
            }
            else if(((i%j)/(j/10))==0)
                break;
            else
            {
                    a=0;
            }
        }
        if(a==1)
        {
           if(num%i==0)
           {
               printf("YES");
               return 0;
           }
        }

    }
    printf("NO");
    return 0;
}
