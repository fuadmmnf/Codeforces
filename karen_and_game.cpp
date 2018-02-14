#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0,i,j,k,l,n,m=0,number=0;
    int str[101][101],row[102],column[101];
    memset(str,0,sizeof(str));

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>str[i][j];
        }
        c=1000;
        for(k=0;k<m;k++)
        {
            if(str[i][k]<c) c=str[i][k];
        }
        number+=c;
        for(k=0;k<c;k++)
            {
                row[d]=i;
                d++;
            }


        for(k=0;k<m;k++)
        {
                str[i][k]-=c;
        }
    }


    for(j=0;j<m;j++)
    {
        c=1000;
        for(i=0;i<n;i++)
        {
            if(str[i][j]<c) c=str[i][j];
        }
        number+=c;
        for(i=0;i<n;i++)
            str[i][j]-=c;

        for(k=0;k<c;k++)
        {
             column[e]=j;
             e++;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            if(str[i][j]!=0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
    }
    cout<<e+d<<endl;
    for(i=0;i<d;i++) cout<<"row "<<row[i]+1<<endl;
    for(i=0;i<e;i++) cout<<"col "<<column[i]+1<<endl;

    return 0;
}
