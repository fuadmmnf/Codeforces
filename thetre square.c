#include<stdio.h>
int main()
{
   long long int n,m,a;
   scanf("%lld %lld %lld",&n,&m,&a);
    if(a==1 && m&n>a)
    {
        printf("%lld",m*n);
    }
   else if(n%a==0 && m%a==0)
   {
    printf("%lld",(n/a)*(m/a));
   }
   else if(n%a!=0 && m%a==0)
   {
       if(a>n%a)
       {
           printf("%lld",(n/a+1)*(m/a));
       }
       else
       {
           printf("%lld",((n/a)+((n%a)/a)+1)*(m/a));
       }
   }
    else if(n%a==0 && m%a!=0)
    {
         if(a>m%a)
       {
          printf("%lld",(m/a+1)*(n/a));
       }
       else
       {
          printf("%lld",((m/a)+((m%a)/a)+1)*(n/a));
       }
    }
   else if(n%a!=0 && m%a!=0)
    {
         if(a>m%a && a>n%a)
       {
          printf("%lld",(m/a+1)*(n/a+1));
       }
         else if(a>m%a && a<n%a)
         {
             printf("%lld",(m/a+1)*((n/a)+((n%a)/a)+1));
         }
         else if(a<m%a && a>n%a)
         {
             printf("%lld",(((m/a)+((m%a)/a)+1)*(n/a+1)));
         }
         else if("a<m%a && a<n%a")
         {
             printf("%lld",(((n/a)+((n%a)/a))+1)*(((m/a)+((m%a)/a)+1)));
         }

    }

   return 0;
}
