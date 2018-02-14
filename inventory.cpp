
#include<bits/stdc++.h>

typedef long long LL;
/*
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;

*/
#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
/*
#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
*/
#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;


/*
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c,d=0,e=0,i,j,k,l,n,m,arr[100001],countnum[100001],ansss[100003],Min=9999999999999,Max=0,_count=0,sum=0;
    bool found[100002];
    setarr(countnum,0);
    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
        countnum[arr[i]]++;
    }
    REP(i,1,n+1)
    {
        if(countnum[i]==0) ansss[d++]=i;
    }
    d=0;
    REP(i,0,n)
    {

        if(countnum[arr[i]]>1 || arr[i]>n) cout<<ansss[d++]<<" ";
        else cout<<arr[i]<<" ";
        countnum[arr[i]]--;

    }
    cout<<endl;
    r0;
}
