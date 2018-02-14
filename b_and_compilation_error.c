#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b,c,d,i,j,n,sum1=0,sum2=0,sum3=0;
     char str1[10],str2[10],str3[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str1);
        sum1+=atoi(str1);

    }
    for(i=0;i<n-1;i++)
    {
        scanf("%s",str2);
        sum2+=atoi(str2);
    }
    for(i=0;i<n-2;i++)
    {
        scanf("%s",str3);
        sum3+=atoi(str3);
    }
    printf("%d\n",sum1-sum2);
    printf("%d\n",sum2-sum3);
    return 0;
}

