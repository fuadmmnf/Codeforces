#include<bits/stdc++.h>
using namespace std;

#define LL long long
LL arr1[100005];
int main()
{
	std::ios_base::sync_with_stdio(false);
    unsigned LL a,b,c,d=0,e,f,i,j,k,n,arr[100005],sum=0,even=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%2==1)
        {
            arr1[d]=arr[i];
            d++;
        }

    }
    sort(arr1,arr1+d);
    for(i=0;i<d;i++)
    {
        if(sum%2==0) break;
        else sum-=arr1[i];

    }
    cout<<sum<<endl;
    return 0;
}
