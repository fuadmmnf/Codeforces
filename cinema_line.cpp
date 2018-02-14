

#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	int a,b,c=0,d,i,j,k,l,n,ret=0,twenty=0,fifty=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==25)
        {
            twenty++;
        }
        else if(a==50)
        {
            if(twenty>0)
            {
                twenty--;
                fifty++;
            }
            else
            {
                c=1;
                break;
            }
        }
        else if(a==100)
        {
            if(fifty>0 && twenty>0)
            {
                fifty--;
                twenty--;
            }
            else if(twenty>2) twenty-=3;
            else
            {
                c=1;
                break;
            }
        }


    }

    if(c)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
