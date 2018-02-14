#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    int a,b,c,d,i,j,k,l=0,n;
    cin>>n>>a>>b;

        d=n-(a+b);
        c=n-a;
        while(d>1)
        {
            l++;
            d--;
        }
        c-=l;



    cout<<c<<endl;
    return 0;
}
