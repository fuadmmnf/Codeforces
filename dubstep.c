#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    int i,j,k,n,a;

    scanf("%s",str);
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        if(str[i]=='W' && str[i+2]=='B' && str[i+1]=='U')
        {
            i=i+2;
            continue;
        }
        else printf("%c",str[i]);
         if(str[i+1]=='W' && str[i+3]=='B' && str[i+2]=='U')
         {
            printf(" ");
            i+=3;
    }
    }
    return 0;
}
