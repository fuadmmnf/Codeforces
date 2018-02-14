#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str1[1000000];
	while(scanf("%s",str1)!=EOF)
	{
		j=strlen(str1);
		printf("%s",str1);
		for(i=0;i<j;i++)
		{
			printf("%c",str1[j-i-1]);
		}
		printf("\n");
	}
	return 0;
}
