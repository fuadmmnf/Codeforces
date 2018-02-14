#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long int a,b,c,n=0;
    register long int i,j;
    scanf("%ld %ld",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(b%i==0 && b/i<=a) n++;

    }
    printf("%ld",n);
    return 0;

}
