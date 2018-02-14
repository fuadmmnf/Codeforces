#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="I hate";
    char str2[20]="I love";
    int a,b,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%s ",str1);
        }
        else printf("%s ",str2);
        if(i==n) printf("it ");
        else printf("that ");
    }
    return 0;
}
