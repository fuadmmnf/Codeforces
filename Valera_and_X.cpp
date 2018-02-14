#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,d=0,i,j,k,n;
    char str[400][400];

    cin>>n;
    cin>>str[0];
    a=str[0][0];
    b=str[0][1];
    if(a==b)
        c=1;

    for(i=0;i<n;i++)
        if(str[0][i]==a) d++;

    for(i=1;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>str[i][j];
            if(str[i][j]==a)
                d++;
            if(str[i][j]!=a && str[i][j]!=b)
                    c=1;
        }

        if(d!=n*2-1) c=1;

    for(i=0,j=0;i<n-1 && j<n-1;i++,j++)
        if(str[i+1][j+1]!=str[i][j])
        {
            cout<<"NO"<<endl;
            return 0;
        }

    for(i=n-1,j=0;i>0 && j<n-1;i--,j++)
        if(str[i][j]!=str[i-1][j+1])
        {
        cout<<"NO"<<endl;
        return 0;
        }

    if(c) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;


}

