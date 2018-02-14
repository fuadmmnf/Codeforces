#include<stdio.h>
int main()
{
    int i,j,a,b,c,n,num[100060],one=0,two=0,three=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]==4) count++;
        else if(num[i]==1) one++;
        else if(num[i]==2) two++;
        else if(num[i]==3) three++;
    }
    if(three>=one) one=0;
    else one-=three;
    count+=three;

    for( ; ; )
    {
        if(two>1)
        {
            two-=2;
            count++;
        }
        else break;
    }

    if(two>one) one=0;
    else one-=2*two;
   for( ; ; )
   {
       if(one>0)
       {
           one-=4;
           count++;
       }
       else break;
   }
    count+=two;
    printf("%d",count);
    return 0;


}
