#include<string.h>
#include<string.h>

int main()
{
     long long int i,j,n,a;
    scanf("%lld",&a);
    if(a%2==0) printf("%lld",a/2);
    else
    {
        printf("%lld",((a-1)/2)-a);
    }
    return 0;
}
