#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l,n,m,sum=0,days=0;
    cin>>a>>b>>d>>c>>l;
    i=a;
    j=c;
    sum+=b;
    days++;

    if(sum<a)
    {
        while(1)
        {
            sum-=l;
            if(sum<0) sum=0;
            if(b+j<=d)
            sum+=(b+j);
            else sum+=d;
            days++;
            j+=c;
            if(sum>=a) break;
        }
    }
    cout<<days<<endl;
    return 0;
}
