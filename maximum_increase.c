#include<stdio.h>
#include<string.h>

int main()
{
    long long int i,j,k,a,b,c,n=0,max;
    char str[100000][15];
    while(scanf("%lld",&a)!=EOF)
    {
        max=1;
        n=1;
        for(i=0;i<a;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0;i<a-1;i++)
        {
            if(strlen(str[i])<strlen(str[i+1]))
            {
                n++;
                if(max<n) max=n;
            }
            else if(strlen(str[i])>strlen(str[i+1]))
            {
                n=1;
            }
            else if(strcmp(str[i+1],str[i])==1)
            {
                n++;
            if(max<n) max=n;
            }
            else n=1;

        }
        printf("%lld\n",max);
    }
    return 0;
}
