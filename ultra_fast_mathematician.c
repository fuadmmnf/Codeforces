#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char str1[200],str2[200],res[200];
    scanf("%s",str1);
    scanf("%s",str2);
    n=strlen(str1);
    for(i=0; i<n ; i++)
    {
        if(str1[i]==str2[i]) res[i]='0';
        else res[i]='1';
    }
    for(i=0;i<n;i++)
    {
        printf("%c",res[i]);
    }

    return 0;
}
