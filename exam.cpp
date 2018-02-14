#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);

    int a,b,c,d,i,j,k,l,n,arr[10000];
    cin>>n;

    if(n<=3 && n>1) cout<<n-1<<endl;
    else cout<<n<<endl;


     if(n>3)
    {
        for(i=2;i<=n;i+=2)
            cout<<i<<" ";
    }

    for(i=1;i<=n;i+=2)
        cout<<i<<" ";

    cout<<endl;
    return 0;

}
