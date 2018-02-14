#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;
    char name[100];

    scanf("%s",&name);
    n=strlen(name);

    printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(name[i]==name[j])
                {
                    if(i!=j)
                    {
                        n--;
                    }

                }

        }

        printf("%d\n",n);
    }
    if(n%2==1) printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");

    return 0;
}
