#include<stdio.h>
#include<string.h>
int main()
{
   char str1[80];
   int i,j,a,n;
   scanf("%s",str1);
   n=strlen(str1);
   if(str1[0]=='-')
   {
    if(str1[n-1]>str1[n-2])
    {
        str1[n-1]='\0';
    }
    else
    {
       str1[n-2]=str1[n-1];
       str1[n-1]='\0';
    }
   }
   if(!strcmp(str1,"-0"))
   {
       printf("0");
       return 0;
   }

    printf("%s",str1);
   return 0;

}
