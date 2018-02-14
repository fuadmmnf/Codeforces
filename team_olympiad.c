#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,i,n,one=0,two=0,three=0,min=5001;
    scanf("%d",&a);
    int onear[a],twoar[a],threear[a],num[a];
    for(i=0;i<a;i++)
        {
            scanf("%d",&num[i]);
            if(num[i]==1)
            {
                one++;
                onear[one-1]=i;
            }
            if(num[i]==2)
            {
                two++;
                twoar[two-1]=i;
            }
            if(num[i]==3)
            {
                three++;
                threear[three-1]=i;
            }
        }
        if(one<min) min=one;
        if(two<min) min=two;
        if(three<min) min=three;

      printf("%d\n",min);
      for(i=0;i<min;i++)
      {
          printf("%d %d %d\n",onear[i]+1,twoar[i]+1,threear[i]+1);
      }
      return 0;

}
