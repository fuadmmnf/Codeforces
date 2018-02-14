#include<bits/stdc++.h>
#include<string>
#include<string.h>



typedef long long LL;
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)

#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));

using namespace std;

int main()
{
	bool vis[200][200];
    int a,b,c,d,i,j,k,l,n,m,arr[101][101],arr1[101][101];


    setarr(vis,false);

    cin>>n>>m;
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0)
            {
                for(l=0;l<m;l++)
                    {
                        arr1[i][l]=0;
                        vis[i][l]=true;
                    }
                    for(l=0;l<n;l++)
                    {
                        arr1[l][j]=0;
                        vis[l][j]=true;
                    }
                }
            }
        }
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            if(arr[i][j]==1)
            {
                a=0;
                 for(l=0;l<m;l++)
                    {
                        if(vis[i][l]!=true)
                        {
                            a++;
                        }
                    }
                    for(l=0;l<n;l++)
                    {
                       if(vis[l][j]!=true)
                       {
                           a++;
                       }
                    }
                    if(a) b=1;
            }
        }
    }
    if(b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            if(vis[i][j]==false) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}


