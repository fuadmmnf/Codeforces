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

    int a,b,c,d,i,j,k,l,n,m,mincost=0,arr[30002];
    bool ab[30003];
    setarr(ab,false);
    cin>>n;
    REP(i,1,n+1)
    {
        cin>>arr[i];
    }
    REP(i,1,n+1)
    {
        if(ab[arr[i]]==false) ab[arr[i]]=true;
        else
        {
            REP(j,arr[i]+1,30003)
            if(ab[j]==false)
            {
                mincost+=j-arr[i];
                ab[j]=true;
                break;
            }
        }
    }
    cout<<mincost<<endl;






	return 0;
}
