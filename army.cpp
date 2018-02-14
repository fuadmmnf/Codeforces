#include<bits/stdc++.h>


#define LL long long;
using namespace std;

int main()
{
    int a,b,c,d=0,i,j,k,l,n,arr[200],years=0;
    cin>>n;
    for(i=1;i<n;i++)
        cin>>arr[i];

    cin>>a>>b;
    for(i=a+1;i<=b;i++)
    {
        years+=arr[i-1];
    }
    cout<<years<<endl;
    return 0;

}
