#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);
	int a,b,c=0,d=0,i,j,k,l,n,m,s;
    char str[20][20];
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>str[i];
    for(i=0;i<n;i++)
    {
        s=0;
        d=0;
        for(j=0;j<m;j++)
        {
            if(str[i][j]=='S')
            {
                s=1;
                break;
            }

        }


        if(!s)
        {
             for(j=0;j<m;j++)
            {
                if(str[i][j]!='E')
                {
                    str[i][j]='E';
                    d++;
                }
            }
            c+=d;
        }
    }




    for(i=0;i<m;i++)
    {
        s=0;
        d=0;
        for(j=0;j<n;j++)
        {
            if(str[j][i]=='S')
            {
                s=1;
                break;
            }

        }


        if(!s)
        {
             for(j=0;j<n;j++)
            {
                if(str[j][i]!='E')
                {
                    str[j][i]='E';
                    d++;
                }
            }
            c+=d;
        }
    }
    cout<<c<<endl;
    return 0;
}
