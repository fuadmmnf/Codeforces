#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a,b,c,d,i,j,n,white=0,black=0;
	char str[10][10];

	for(i=0;i<8;i++)
	{
		scanf("%s",str[i]);
		for(j=0;j<8;j++)
		{
			if(toupper(str[i][j])=='Q')
			{
				if(str[i][j]=='Q') white+=9;
				else black+=9;
			}
			else if(toupper(str[i][j])=='R')
			{
				if(str[i][j]=='R') white+=5;
				else black+=5;
			}
			else if(toupper(str[i][j])=='B')
			{
				if(str[i][j]=='B') white+=3;
				else black+=3;
			}
				else if(toupper(str[i][j])=='N')
			{
				if(str[i][j]=='N') white+=3;
				else black+=3;
			}
				else if(toupper(str[i][j])=='P')
			{
				if(str[i][j]=='P') white+=1;
				else black+=1;
			}

		}
	}
	if(white>black) printf("White");
	else if(black>white) printf("Black");
	else printf("Draw");
	return 0;
}