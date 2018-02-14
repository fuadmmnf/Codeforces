#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        while(a<=ans)
        {
            a+=b;
        }
        ans=a;
    }
    cout<<ans<<endl;
    return 0;
}
