#include<bits/stdc++.h>

typedef long long LL;


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

map < char,int > alpha;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    string str;
    cin>>str>>n;
    REP(i,0,26)
    {
        cin>>a;
        Max=max(Max,a);
        alpha['a'+i]=a;
    }
    b=str.size();
    REP(i,0,b)
    {
        sum+=((i+1)*alpha[str[i]]);
    }
    REP(i,b+1,n+b+1)
    {
        sum+=(Max*i);
    }
    cout<<sum<<endl;
    r0;
}
