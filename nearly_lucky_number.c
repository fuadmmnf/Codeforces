#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i,j,a,b,n,num=0;

    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='4' || str[i]=='7') num++;
    }
    if(num==4 || num==7) printf("YES\n");
    else printf("NO\n");
    return 0;
}
