#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,rowCount=0,colCount=0,x,y;
    bool rowCovered[100004],colCovered[100004];
    int64_t ans;

    memset(rowCovered,false,sizeof(rowCovered));
    memset(colCovered,false,sizeof(colCovered));
    cin>>n>>m;

    ans=n;
    ans*=n;

    //cout<<ans<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        if(!rowCovered[x])
        {
            rowCovered[x]=true;
            ans-= (n-colCount);

            rowCount++;
        }

        if(!colCovered[y])
        {
            colCovered[y]=true;
            ans -= (n-rowCount);
            colCount++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}
