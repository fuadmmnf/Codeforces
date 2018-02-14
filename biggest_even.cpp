#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);
    LL a,b,c,d,e,f,i,j,k,n,arr[100005],sum=0,even=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        if(!(sum&1)) even=sum;
    }
    cout<<even<<endl;
    return 0;
}
