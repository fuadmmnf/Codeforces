#include<stdio.h>
#include<string.h>
int  main()
{
    int n,i,j,change=1;
    char str[200];
    scanf("%s",str);
    n=strlen(str);
    for(i=1;i<n;i++)
    {
        if(str[i]>='a')
            change=0;
    }
    if(change)
    {
        for(i=0;i<n;i++)
        {
            if(str[i]>='a') str[i]-=32;
            else str[i]+=32;
        }
    }
    printf("%s",str);
    return 0;
}
