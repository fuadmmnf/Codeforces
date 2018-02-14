#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,a=0,b=0,c=0,d=0;
    char chat[100];

    scanf("%s",&chat);
    n=strlen(chat);
    for(i=0;i<n;i++)
    {
        if(chat[i]=='h')
       {
           a+=1;
       }
       else if(chat[i]=='e' && a>0)
        b+=1;
       else if(chat[i]=='l' && b>0)
        c+=1;
       else if(chat[i]=='o' && c>1)
        d+=1;
    }
    if(d>0) printf("YES");
    else printf("NO");
    return 0;
}
