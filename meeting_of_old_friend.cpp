
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

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    LL l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2>>k;
    a=min(l1,l2);
    b=max(r1,r2);
    if((l1>=l2 && l1<=r2) || (l2>=l1 && l2<=r1))
    {


        sum=(b-a)+1;
        sum-= abs(r1-r2);
        sum-= abs(l1-l2);
        if(k>=max(l1,l2) && k<=min(r1,r2)) sum--;
    }
    cout<<sum<<endl;
    r0;
}
