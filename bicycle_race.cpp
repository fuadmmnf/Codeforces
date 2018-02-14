
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
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c=0,d=0,i,j,k,l,n,m,Max1=0,arr[10001][2],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    c=99999999999;
    d=999999999;


    REP(i,0,n+1)
    {
        cin>>a>>b;
        if(a!=c) _count++;
        c=a;
    }
    cout<<_count-3<<endl;
    r0;
}
