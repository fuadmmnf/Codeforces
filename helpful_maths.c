#include<stdio.h>
#include<string.h>

int main()
{
    int j,i,n,temp;
    char math[100];


    scanf("%s",&math);
    n=strlen(math);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
        if(math[j]!='+')
        {

            if(math[j]>math[j+2])
            {
                temp=math[j+2];
                math[j+2]=math[j];
                math[j]=temp;
            }
        }
    }
    }
   for(i=0;i<n;i++)
   {

        printf("%c",math[i]);
   }

    return 0;
}
