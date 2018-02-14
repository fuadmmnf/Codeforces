#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    int i,n;

    scanf("%s",&word);
     n=strlen(word);
    if(word[0]>='a')
    {
        printf("%c",word[0]-32);
        for(i=1;i<n;i++)
        {
          printf("%c",word[i]);
        }
    }
    else printf("%s",word);
    return 0;
}
