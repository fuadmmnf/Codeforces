#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	LL i,n,poly=0;
	char str[200005][2];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        if(str[i][0]=='T') poly+=4;
        else if(str[i][0]=='C') poly+=6;
        else if(str[i][0]=='O') poly+=8;
        else if(str[i][0]=='D') poly+=12;
        else if(str[i][0]=='I') poly+=20;
    }
    cout<<poly<<endl;
    return 0;
}
