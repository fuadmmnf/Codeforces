#include<stdio.h>

#include<bits/stdc++.h>

typedef long long LL;

#define REP(i,a,b)   for (LL i =(LL)a; i <LL(b); i++)


using namespace std;

LL gcd(LL a, LL b)
{
    LL t;
    while(b)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}

int main()
{


	LL c,d,i,j,k,l,n,r,m;
    cin>>l>>r;
    REP(i,l,r-1)
    {
        REP(j,i+1,r)
        {
            if(gcd(i,j)==1)
            {
                REP(k,j+1,r+1)
                {

                    if(gcd(j,k)==1 && gcd(i,k)!=1)
                    {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
