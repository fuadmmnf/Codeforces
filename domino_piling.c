#include<stdio.h>
int main()
{
    int m,n,a;
    scanf("%d %d",&m,&n);
    if(m%2==0) a=((m/2)*n);
    else if(m%2==1 ) a=((m/2)*n) +(n/2);


    printf("%d",a);
    return 0;
}
