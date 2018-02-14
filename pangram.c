#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,d;
    char str[200];
    scanf("%d",&a);
    scanf("%s",str);

    for(i=65;i<65+26;i++)
    {
        d=1;
        for(c=0;c<a;c++)
        {
        if(str[c]==i || str[c]==i+32)
        {
                d=0;
               break;
        }
        }
        if(d==1)
        {
            printf("NO");
            return 0;
        }

    }
    printf("YES");
    return 0;
}


