#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{
    int a,b,c,d=0,i,j,k,l,m,n,q,w,r;
    int arr[200001];
    int coffee[200001];


    cin>>n>>k>>q;
     memset(&coffee,0,sizeof(bool));
    memset(&arr,0,sizeof(arr));
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        for(j=l;j<=r;j++)
            coffee[j]++;
    }
    for(i=0;i<q;i++)
    {
        cin>>a>>b;
        for(j=a;j<=b;j++)
        {
            if(coffee[j]>=k) arr[i]++;
        }

    }

    for(i=0;i<q;i++)
        cout<<arr[i]<<endl;



    return 0;
}
