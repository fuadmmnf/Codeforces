#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,j,k,n,num1[4],num2[4],sum1=0,sum2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&num1[i]);
        sum1+=num1[i];
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&num2[i]);
        sum2+=num2[i];
    }
    scanf("%d",&n);
    if(sum1%5!=0)
    sum1+=5;
    if(sum2%10!=0)
    sum2+=10;
    n-=((sum1/5)+(sum2/10));
    if(n<0) printf("NO");
    else printf("YES");
    return 0;
}
