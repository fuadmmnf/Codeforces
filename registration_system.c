#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

union database
{
	char name[33];
};

int main()
{
	int a,b,i,j,n,d;
	scanf("%d",&n);
	int c[n];
	union database person[n];

	for(i=0;i<n;i++)
	{
		scanf("%s",person[i].name);
		c[i]=1;
	}

	for(i=0;i<n;i++)
	{
		d=1;
		for(j=0;j<i;j++)
		{
			if(!strcmp(person[i].name,person[j].name))
			{
				printf("%s%d\n",person[i].name,c[j]);
				c[j]++;
				d=0;
				break;
			}
 		}
 		if(d) printf("OK\n");
	}
	return 0;
}