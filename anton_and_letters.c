#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,n,count=0;
    char str[10000];
    gets(str);
    n=strlen(str);
    for(i=1;i<n;i=i+3)
    {
        b=1;
        if(str[i]>=65+32 &&str[i]<=32+65+26)
        {
            for(j=1;j<i;j++)
            {
                if(str[i]==str[j])
                {
                    b=0;
                    break;
                }
            }
            if(b==0) continue;
        else
        count++;
        }

    }
    printf("%d",count);
    return 0;
}
