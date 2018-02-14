#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,a=0;
    char str[51];

    scanf("%d",&n);

    scanf("%s",&str);
    for(i=0;i<n;i++)
    {
        if(str[i]==str[i+1])
        {
            a++;
        }
    }

    printf("%d",a);
    return 0;
}
