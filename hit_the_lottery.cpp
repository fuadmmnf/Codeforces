#include<bits/stdc++.h>


using namespace std;


int main()
{
    long long n,a,ans=0;
    int arr[]={1,5,10,20,100};
    cin>>n;
    for(int i=4;i>=0;i--)
    {
        a=(n/arr[i]);
        n-=a*arr[i];
        ans+=a;
    }
    cout<<ans<<endl;
    return 0;
}
