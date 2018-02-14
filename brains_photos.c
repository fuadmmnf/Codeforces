#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,n,i,d=0;
    char ch[101][101][2];
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(c=0;c<b;c++)
        {
            scanf("%s",ch[i][c]);
            if(!(strcmp(ch[i][c],"C") && strcmp(ch[i][c],"M") && strcmp(ch[i][c],"Y")))
                d=1;
        }
    }
    if(d==0)
    printf("#Black&White");
    else printf("#Color");
    return 0;
}
