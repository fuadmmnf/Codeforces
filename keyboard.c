#include<stdio.h>
#include<string.h>
int main()
{
    char str[200]="qwertyuiopasdfghjkl;zxcvbnm,./";

    char key[200],ch;
    int a,b,i,j,n;
    scanf("%c",&ch);
    scanf("%s",key);
    n=strlen(key);
    for(i=0;i<n;i++)
    {
        for(j=0;j<30;j++)
        {
            if(str[j]==key[i])
            {
                if(ch=='R') key[i]=str[j-1];
                else key[i]=str[j+1];
                    break;
            }
        }
    }
    printf("%s",key);
    return 0;
}
