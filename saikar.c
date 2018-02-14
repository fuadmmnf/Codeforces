#include<stdio.h>
int main(){
    int str1[550],str2[550],str3[550],i,j,n,sum=0,num=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&str1[i],&str2[i]);
    }
      for(i=0;i<n;i++){
        sum=sum+str1[i];
        }
         for(i=0;i<n;i++){
            num=num+str2[i];
        }
        if(num>sum)str3[0]=num-sum;
        if(num<sum)str3[0]=sum-num;

    for(j=0;j<n;j++){
        sum=0;
        num=0;
        x=str1[j];
        str1[j]=str2[j];
        str2[j]=x;

        for(i=0;i<n;i++){
            sum=sum+str1[i];
        }

         for(i=0;i<n;i++){
            num=num+str2[i];
        }
        if(num>sum)str3[j+1]=num-sum;
        if(num<sum)str3[j+1]=sum-num;

         x=str1[j];
        str1[j]=str2[j];
        str2[j]=x;
    }
    num=str3[0];
    for(i=0;i<=n;i++){
        if(num<str3[i])num=str3[i];
    }

     for(i=0;i<=n;i++){
        if(num==str3[i]){printf("%d",i); return 0;}
    }

return 0;
}
