#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n,i,j;
    bool has_one=false;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if(j==1) has_one=true;
    }
    if(has_one) cout<<"-1"<<endl;
    else cout<<"1"<<endl;
    return 0;
}
