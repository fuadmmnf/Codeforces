#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,n,t=0;
    char str[100000];
    scanf("%d %d",&a,&b);
    scanf("%s",str);

    for( ; ;t++)
    {
        if(t>=b) break;
        for(i=0;i<a;i++)
        if(str[i]=='B' && str[i+1]=='G')
        {
            str[i+1]=str[i]+str[i+1];
            str[i]=str[i+1]-str[i];
            str[i+1]=str[i+1]-str[i];
            i++;
        }
    }
    printf("%s",str);
    return 0;
}
