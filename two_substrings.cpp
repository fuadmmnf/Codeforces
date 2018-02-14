#include<bits/stdc++.h>
#include<string>
using namespace std;
char str[100007];
int main()
{
    long long a=0,b=0,c,d,i,j,k,l,n,ab=0,ba=0,aba=0;
    cin>>str;
    n=strlen(str);

    for(i=0;i<n-1;++i)
    {
        if((str[i]=='A' && str[i+1]=='B' &&str[i+2]=='A')|| (str[i]=='B' && str[i+1]=='A' &&str[i+2]=='B'))
        {
            aba+=1;
            i+=2;
            continue;
        }
        else if(str[i]=='A' && str[i+1]=='B') ab=1;
        else if(str[i]=='B' && str[i+1]=='A') ba=1;
    }

    if((aba &&(ab || ba)) || (ab && ba) || aba>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
