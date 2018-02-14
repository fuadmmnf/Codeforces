#include<stdio.h>
int main()
{
    int a,b,c,n,i,j;
    scanf("%d",&n);
      char str[n];
    scanf("%s",str);
    a=n/2,b=a;
    c=n;
    for( ; ; )
    {
        if((str[a]=='1' && str[b+1]=='0') ||(str[a]=='0' && str[b+1]=='1'))
        {
            c-=2;
            b++;
            a--;
        }


    }
    printf("%d",c);
    return 0;
}
