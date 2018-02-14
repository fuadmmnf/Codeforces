
#include<bits/stdc++.h>

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


int criminal[1001];


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,_count=0,sum=0;
    cin>>n>>a;
    setarr(criminal,0);
    REP(i,1,n+1)
    {
        cin>>b;
        if(b==1)
        {
            criminal[abs(i-a)]++;

        }
        else
        {
            criminal[abs(i-a)]--;
        }

    }
    REP(i,0,101)
    {
        if(criminal[i]>0) _count+=criminal[i];
    }
    cout<<_count<<endl;
    r0;
}
