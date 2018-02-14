#include<bits/stdc++.h>
using namespace std;

#define LL long long

LL  arr[100001],sum=0,arr1[100001],low,high,mid;

int main()
{
    LL a,b,c,d,i,j,k,l,n,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>arr1[i];
        low=0;
        high=n;

        while(low<high)
        {
            mid=(low+high)/2;
             if(arr1[i]>=arr[n-1]) {
                        cout<<n<<endl;
                        break;
                }
                else if(arr1[i]<arr[0])
                {
                    cout<<0<<endl;
                    break;
                }
            if(arr[mid]>arr1[i]) high=mid;
            else if(arr[mid]<=arr1[i])
            {

                if(arr[mid]<=arr1[i] && arr[mid+1]>arr1[i])
                {
                    cout<<mid+1<<endl;
                    break;
                }
                else low=mid;
            }

        }
    }
    return 0;
}
