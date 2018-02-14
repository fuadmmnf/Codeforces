#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,n;
    char str1[200],str2[200],res[300];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",res);
    strcat(str1,str2);
    n=strlen(str1);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str1[i]>str1[j])
            {
                str1[i]=str1[i]+str1[j];
                str1[j]=str1[i]-str1[j];
                str1[i]=str1[i]-str1[j];
            }
        }
    }
    n=strlen(res);
    for(i=0;i<n;i++)
    {
          for(j=i+1;j<n;j++)
        {
            if(res[i]>res[j])
            {
                res[i]=res[i]+res[j];
                res[j]=res[i]-res[j];
                res[i]=res[i]-res[j];
            }
        }
    }
    if(!strcmp(str1,res)) printf("YES");
    else printf("NO");
    return 0;
}
