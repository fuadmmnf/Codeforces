#include<stdio.h>
int main()
{
    int a,i,add=0,cube=0;
    scanf("%d",&a);
    for( i=0;i<=a;i++ )
    {
        add++;
        if(cube+add>=a)
        {
            cube+=add;
        }
        else break;
    }
    printf("%d",i);
    return 0;
}
