#include<stdio.h>

int main()
{
    long long int k,r,a,i,j,m;
    scanf("%lld %lld",&k,&r);

    for(i=1;i<10000000000;)
    {

          a=k*i;
        for(j=0;j<100000000;j++)
        {

            if(a<10 && a>0) break;
              else
           {
                a=a-10;
           }

            if(a==0)
            {
                printf("%lld",i);
                return 0;
            }


        }


        if(a-r==0)
        {
                printf("%lld",i);
                return 0;
        }


        i++;


    }
    return 0;
}
