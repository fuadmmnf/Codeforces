#include<bits/stdc++.h>

using namespace std;
#define LL long long

int main()
{
    LL a,b,c,d,i,j;
    while(cin>>a>>b>>c)
    {

    if((a==b && c==0)|| a==b) cout<<"YES"<<endl;
    else if(a!=b && c==0) cout<<"NO"<<endl;
    else
    {
        if((b-a>0 && c>0))
        {
            if((b-a)%c==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(b-a<0 && c<0)
        {
            if((a-b)%(-c)==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    }
    return 0;

}
