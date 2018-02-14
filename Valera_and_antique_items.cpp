#include<bits/stdc++.h>

#define LL long long;
using namespace std;

int main()
{
    int a[80],b,c,d=0,i,j,k,l,n,m,deals=0;
    int arr[100][100],dealer[60];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        for(j=0;j<a[i];j++)
            cin>>arr[i][j];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i];j++)
        {
            if(arr[i][j]<m)
            {
                dealer[d++]=i+1;
                deals++;
                break;
            }
        }
    }
    cout<<deals<<endl;
    for(i=0;i<deals;i++) cout<<dealer[i]<<" ";
    cout<<endl;
    return 0;
}
