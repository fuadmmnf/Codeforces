#include<stdio.h>
#include<string.h>

int main()
{
    int a,b=1,i,j,n;
   char str[][10]={"Sheldon","Leonard","Penny","Rajesh","Howard"};

    scanf("%d",&n);
   for(i=0;i<100;i++)
   {
       if(n>b*5)
       {
           n-=b*5;
       }
       else
        {
        for(j=0;j<5;j++)
        {
            if(n>b)
                n-=b;
            else
            {
                printf("%s",str[j]);
                return 0;
            }

        }
       }
       b*=2;
   }
   return 0;
}
