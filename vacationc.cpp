#include<bits/stdc++.h>
using namespace std;


int l[200001];
int r[200001];
int len[200001];
int cost[200001];
int main()
{
    int a,b,c,d,i,j,k,m,n,mincost=2000000001,x=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i]>>cost[i];
        len[i]=r[i]-l[i]+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(len[i]+len[j]==k &&(l[i]>r[j] || l[j]>r[i]))
            {
                x=1;
                if(cost[i]+cost[j]<mincost) mincost=cost[i]+cost[j];
            }
        }
    }
    if(x) cout<<mincost<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
