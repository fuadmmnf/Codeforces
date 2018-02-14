#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,i,j,k,n;
	scanf("%d %d",&a,&b);
	if(a%2==0) n=a/2;
	else n=a/2+1;
	for( ;n<=a;n++)
	{
		if(n%b==0)
		{
			printf("%d",n);
			return 0;
		}
	}
	printf("-1");
	return 0;

}