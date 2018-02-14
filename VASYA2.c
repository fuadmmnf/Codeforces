#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,count=0;
    scanf("%d %d",&a,&b);
    c=b;
    for(i=1; ;i++)
    {
        if(a==0) break;
        a--;
        if(i==c)
        {

            c+=b;
            a++;
        }
        count++;

    }
    printf("%d",count);
    return 0;
}
