#include<stdio.h>
#include<math.h>


int main()
{
    int i=0,j,n;
    double  a,b,c,rad[20000],area[2000];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lf",&rad[i]);
        }
        for(i=0;i<n;i++)
        {
        area[i]=(2.0*rad[i])*(2.0*rad[i]);
        area[i]=area[i]-(2*acos(0.0)*rad[i]*rad[i]);
        }
              for(i=0;i<n;i++)
        {
            printf("Case %d: %.2lf\n",i+1,area[i]);
        }
    }
    return 0;
}
