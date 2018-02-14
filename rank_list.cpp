#include<stdio.h>
int main(){
    int i,j,n,k,a[50][2],m=0,p,t,t1,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
         scanf("%d%d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
            if(a[j][0]>a[i][0]  || (a[j][0]==a[i][0]  && a[j][1]<a[i][1])){
                t=a[i][0];  t1=a[i][1];
                a[i][0]=a[j][0];    a[i][1]=a[j][1];
                a[j][0]=t;      a[j][1]=t1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i][0]==a[k-1][0]  && a[i][1]==a[k-1][1])c++;
    }
   /*  for(i=0;i<n;i++){
         printf("%d  %d\n",a[i][0],a[i][1]);
    }   */
    printf("%d",c);
    return 0;
}
