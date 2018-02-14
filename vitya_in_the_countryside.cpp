#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d=1,i,j,k,l,n,arr[100];
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];

    if(n==1 && arr[n-1]!=15 && arr[n-1]!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    a=arr[0];
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]>a || arr[i+1]==0) d=1;
        else if(arr[i+1]<a) d=-1;
        a=arr[i];
    }
    if(arr[n-1]==15 || d==-1) cout<<"DOWN"<<endl;
    else cout<<"UP"<<endl;
    return 0;
}
