#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d,n,i=0;
	
	scanf("%d %d",&n,&a);
	if(n==1 && a==10) printf("-1");
	else
	{
		if(a==10) printf("1");
		else printf("%d",a);
		for(i=1;i<n;i++) printf("0");
 	}
 return 0;
}