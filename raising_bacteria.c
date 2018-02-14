#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int a,n=0;
    scanf("%ld",&a);
    while(1)
    {
        if(a==0) break;
        n+=a%2;
        a/=2;
    }
    printf("%ld",n);
    return 0;

}
