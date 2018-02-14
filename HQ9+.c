#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    char str[110];

    scanf("%s",&str);
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
           {
               printf("YES");
               return 0;
           }
    }
    printf("NO");

    return 0;
}
