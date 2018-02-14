#include<stdio.h>
#include<string.h>
int main()
{
    char a[150][5];
    int x=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);


    for(i=0;i<n;i++)
    {

        if(!(strcmp(a[i],"++X")) || !(strcmp(a[i],"X++")))
           {
                x++;
           }

        else if(!strcmp(a[i],"--X") || !strcmp(a[i],"X--"))
        {
            x--;
        }

    }
    printf("%d",x);
    return 0;
}
