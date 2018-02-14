
#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);

	LL a,b,c,d=0,i,j,k,l,n,arr[200000],root,factor,prime=1;
    cin>>n;
    root=ceil(sqrt(n));
    for(i=2;i<=n && n;i++)
    {
        prime=1;

        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            for( ;n!=0; )
            {
                if(n%i==0 || n-i>1)
                {
                    arr[d]=i;
                    d++;
                    n-=i;
                }
                else break;
            }
        }
    }
    cout<<d<<endl;
    for(i=0;i<d;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
