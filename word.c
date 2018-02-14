#include<stdio.h>
#include<string.h>

int main()
{
    char str[110];
    int i,j,a=0,b=0,k,n;
    scanf("%s",str);

    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=65+26) a++;
        else if(str[i]>=65+32 && str[i]<=65+26+32) b++;
    }

        if(a>b)
        {
           for(i=0;i<n;i++)
           {
              if(str[i]>=65+32 && str[i]<=65+26+32) printf("%c",str[i]-32);
              else printf("%c",str[i]);
           }
        }
        else if(b>=a)
        {
            for(i=0;i<n;i++)
            {
             if(str[i]>=65 && str[i]<=65+26) printf("%c",str[i]+32);
             else printf("%c",str[i]);
        }
        }

        return 0;

}
