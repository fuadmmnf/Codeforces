#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int a,temp=0;
        while (n--)
        {
            scanf("%d",&a);
            temp=(temp+a-1)%2;
            if (temp) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
