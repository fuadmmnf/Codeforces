#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;
    char str1[1000],str2[1000];

    scanf("%s",&str1);
    scanf("%s",&str2);

    n=strlen(str1);

    for(i=0;i<n;i++)
    {
        if(str1[i]==str2[n-1-i])
            j=1;
        else
        {
            j=0;
            break;
        }
    }
    if(j==1) printf("YES");
    else printf("NO");
    return 0;
}
