#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,n,num[105500];
    long long time=0,place=1;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&num[i]);
    }
   for(i=0;i<b;i++)
   {

          if(num[i]>place)
          {

              time+=num[i]-place;
              place=num[i];
          }
          else if(place==num[i]) continue;
          else
          {
             time+=a-place+num[i];
             place=num[i];
          }


   }
   printf("%lld",time);
   return 0;
}
