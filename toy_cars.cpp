
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

    int a,b=0,c,d,i,j,k,l,n,m,arr[200][200];
    bool good[300];
    memset(good,false,sizeof(good));

    cin>>n;

     REP(i,0,n)
    {

        REP(j,0,n)
        {
            cin>>arr[i][j];
        }
    }

    REP(i,0,n)
    {
        a=0;
        REP(j,0,n)
        {
            if(arr[j][i]==2 || arr[j][i]==3)
            {
                a=1;
                break;
            }
        }
        if(a==0 && good[i+1]==false)
        {
            good[i+1]=true;
            b++;
        }
    }


    cout<<b<<endl;

    REP(i,1,102)
    {

        if(good[i]==true) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
