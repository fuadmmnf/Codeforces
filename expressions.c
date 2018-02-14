#include<stdio.h>
int main()
{
    int a,b,c,i,j,max=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a*(b+c))>max) max=a*(b+c);
     if(((a+b)*c)>max) max=(a+b)*c;
     if((a*b*c)>max) max=a*b*c;
     if((a+(b*c))>max) max=a+(b*c);
     if(a+b+c>max) max=a+b+c;

    printf("%d",max);
    return 0;
}
