
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n,count,i,j,k;
    scanf("%d %d %d",&a,&b,&c);


    for(i=1; ;i++)
    {
        d=a;
        e=b;
        f=c;
        if(i%2==0)
        {
            n=1;
            while(e!=f)
            {
                if(e>f)
                {
                    e-=f;
                }
                else f-=e;
            }
            if(e<c)
            c-=e;
            else break;
        }
        else
        {
            n=0;
            while(d!=f)
            {
                if(d>f) d-=f;
                else f-=d;
            }

            if(d<c) c-=d;
            else break;
        }
    }
    printf("%d",n);
    return 0;
}
