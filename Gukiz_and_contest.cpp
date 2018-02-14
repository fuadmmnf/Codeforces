
#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);
    int a,b,c,i,j,k,l,n,arr[3000],arr1[3000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n,greater<int>());


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr1[j])
            {
                cout<<j+1<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}
