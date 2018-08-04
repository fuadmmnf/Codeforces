#include<bits/stdc++.h>

using namespace std;



struct price
{
    int a;
    int b;
};


    bool comp(const price &p , const price &q)
    {
        return (p.a-p.b) < (q.a-q.b);
    }





int main()
{
    int n,m;
    long long sum=0;
    price prices[200004];

    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>prices[i].a;
    for(int i=0;i<n;i++)
        cin>>prices[i].b;

    sort(prices, prices+n, comp);

    for(int i=0;i<n;i++)
    {
        if(m)
        {
            sum+= prices[i].a;
            m--;
        }
        else
        {
            sum+= min(prices[i].a,prices[i].b);
        }
    }
    cout<<sum<<endl;
    return 0;
}
