#include<stdio.h>
#include<string.h>

int main()
{
    int a=0,b=0,i,j,n1,n2;
    char word[2][200];
    for(i=0;i<2;i++)
    scanf("%s",&word[i]);

    n1=strlen(word[0]);
    n2=strlen(word[1]);

    if(n1>n2)
    {
        printf("1");
        return 0;
    }
    else if(n1<n2)
    {
        printf("-1");
        return 0;
    }

     else if(n1==n2)
     {
        for(i=0;i<n1;i++)
        {

                if(word[0][i]>='A' && word[0][i]<='Z')
                {
                    word[0][i]+=32;
                }
                if(word[1][i]>='A' && word[1][i]<='Z')
                {
                    word[1][i]+=32;
                }

               if(word[0][i]>word[1][i])
               {
                   printf("1");
                   return 0;
               }
               else if(word[0][i]<word[1][i])
               {
                   printf("-1");
                   return 0;
               }
               else continue;
                }


            printf("0");

     }
    return 0;
}
