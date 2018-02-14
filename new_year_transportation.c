#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,num[100000];
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1; ; )
    {

            if(i+num[i]<=b)
            {
                if(i+num[i]==b)
                {
                printf("YES");
               return 0;
                }
            }
            else break;


          i=i+num[i];
    }
    printf("NO");
    return 0;
}
