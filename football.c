#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int a,i,j,n=1;

    scanf("%s",&ch);
    a=strlen(ch);
    for(i=0;i<a;i++)
    {
        if(ch[i]==ch[i+1])
         {
            n++;
             if(n>=7)
             {printf("YES");
             return 0;
             }
         }
         else n=1;
        }

    if(n<=6) printf("NO");

    return 0;
}
