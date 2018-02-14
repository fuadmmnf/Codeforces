#include <stdio.h>

#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int i,need=0,pos1,pos2,max=0,mini=100000;
int array1[n];
for(i=0;i<n;i++)
{
scanf("%d",&array1[i]);
if(array1[i]>max)
{
max=array1[i];
pos1=i;
}
if(array1[i]<=mini)
{
mini=array1[i];
pos2=i;
}
}
if(pos1>pos2)
pos2++;

need=(pos1-0)+(n-pos2)-1;
printf("%d",need);
return 0;
}
