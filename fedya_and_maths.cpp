
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


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a=1,b=1,c=1,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=1;
	string str;
    cin>>str;
    n=str.size();
    if(n>1)
        sum=(str[n-2]-'0')*10+(str[n-1]-'0');
    else sum=str[n-1]-'0';
    if(sum%4==0) cout<<"4"<<endl;
    else cout<<"0"<<endl;

      r0;

}
