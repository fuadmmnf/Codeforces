
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

vector<int> myvec;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d=0,e,f,s,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n>>k;
    REP(i,0,n)
    {
        cin>>a;
        myvec.push_back(a);
    }
    REP(i,0,n)
    {
        if(myvec.is_sorted())
        {
            cout<<_count<<endl;
            return 0;
        }
        else
        {
            b=myvec[n-1];
            myvec.pop_back();
            myvec.push_front(b);
        }
    }


    if(myvec.is_sorted())
        {
            cout<<_count<<endl;
            return 0;
        }
        else cout<<-1<<endl;
    r0;

}
