#include<stdio.h>
int main()
{
    int a,b,c,max=0,min=12415,num[3];
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    for(a=0;a<3;a++)
    {
        if(num[a]>max) max=num[a];
        if(num[a]<min) min=num[a];
    }
    printf("%d",max-min);
    return 0;
}
